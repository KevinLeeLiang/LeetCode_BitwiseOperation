//
// Created by garen_lee on 2025/6/24.
/**
  ******************************************************************************
  * @file           : L698_canPartitionKSubsets.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/24
  ******************************************************************************
  */
//

#include "L698_canPartitionKSubsets.h"

bool L698_canPartitionKSubsets::canPartitionKSubsets(vector<int> &nums, int k) {
    if (k > nums.size()) return false;
    int all = accumulate(nums.begin(), nums.end(), 0);
    if (all % k != 0) return false;
    int per = all / k;
    sort(nums.begin(), nums.end());
    if (nums.back() > per) {
        return false;
    }
    int n = nums.size();
    vector<bool> dp(1 << n, false);
    vector<int> curSum(1 << n, 0);
    dp[0] = true;
    for (int i = 0; i < 1 << n; i++) {
        if (!dp[i]) {
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (curSum[i] + nums[j] > per) {
                break;
            }
            if (((i >> j) & 1) == 0) {
                int next = i | (1 << j);
                if (!dp[next]) {
                    curSum[next] = (curSum[i] + nums[j]) % per;
                    dp[next] = true;
                }
            }
        }
    }
    return dp[(1 << n) - 1];
}

void L698_canPartitionKSubsets::test() {
    vector<int> nums = {4, 3, 2, 3, 5, 2, 1};
    int k = 4;
    cout << canPartitionKSubsets(nums, k) << endl;
    nums = {1, 2, 3, 4};
    k = 3;
    cout << canPartitionKSubsets(nums, k) << endl;
}