//
// Created by garen_lee on 2025/6/17.
/**
  ******************************************************************************
  * @file           : L691_minStickers.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/17
  ******************************************************************************
  */
//

#include "L691_minStickers.h"

int L691_minStickers::minStickers(vector<string>& stickers, string target) {
    int m = target.size();
    vector<int> dp(1 << m, -1);
    dp[0] = 0;
    function<int(int)>helper = [&](int mask) {
        if (dp[mask] != -1) return dp[mask];
        dp[mask] = m + 1;
        for (auto &sticker : stickers) {
            int left = mask;
            vector<int> cnt(26, 0);
            for (char c : sticker) {
                cnt[c - 'a']++;
            }
            for (int i = 0; i < m; i++) {
                if ((mask >> i & 1) && cnt[target[i] - 'a'] > 0) {
                    cnt[target[i] - 'a']--;
                    left ^= 1 << i;
                }
            }
            if (left < mask) {
                dp[mask] = min(dp[mask], helper(left) + 1);
            }
        }
        return dp[mask];
    };
    int res = helper((1 << m) - 1);
    return res > m ? -1 : res;
}

void L691_minStickers::test() {
    vector<string>stickers = {"with","example","science"};
    string target = "thehat";
    cout << minStickers(stickers, target) << endl;
    stickers = {"notice","possible"};
    target = "basicbasic";
    cout << minStickers(stickers, target) << endl;
}