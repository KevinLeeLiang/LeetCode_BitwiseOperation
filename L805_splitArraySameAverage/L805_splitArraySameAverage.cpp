//
// Created by garen_lee on 2025/7/15.
/**
  ******************************************************************************
  * @file           : L805_splitArraySameAverage.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/15
  ******************************************************************************
  */
//

#include "L805_splitArraySameAverage.h"

bool L805_splitArraySameAverage::splitArraySameAverage(vector<int> &nums) {
    int n = nums.size();
    int m = n / 2;
    int sum = accumulate(nums.begin(), nums.end(), 0);
    bool isPossible = false;
    for (int i = 0; i <= m; ++i) {
        if (sum * i % n == 0) {
            isPossible = true;
            break;
        }
    }
    if (!isPossible) {
        return false;
    }
    vector<unordered_set<int>> dp(m + 1);
    dp[0].insert(0);
    for (int num : nums) {
        for (int i = m; i >= 1; --i) {
            for (int x : dp[i - 1]) {
                int curr = x + num;
                if (curr * n == sum * i) {
                    return true;
                }
                dp[i].emplace(curr);
            }
        }
    }
    return false;
}

void L805_splitArraySameAverage::test() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << splitArraySameAverage(nums) << endl;
    nums = {3, 1};
    cout << splitArraySameAverage(nums) << endl;
}