//
// Created by garen-lee on 2025/2/19.
/**
  ******************************************************************************
  * @file           : L78_subsets.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/19
  ******************************************************************************
  */
//

#include "L78_subsets.h"

vector<vector<int>> L78_subsets::subsets(vector<int> &nums) {
    vector<int>t;
    vector<vector<int>>ans;
    int n = nums.size();
    for (int mask = 0; mask < (1 << n); mask++) {
        t.clear();
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                t.push_back(nums[i]);
            }
        }
        ans.push_back(t);
    }
    return ans;
}

void L78_subsets::test() {
    vector<int>nums = {1, 2, 3};
    vector<vector<int>>result = subsets(nums);
    print_vector_vector(result);
    nums = {0};
    result = subsets(nums);
    print_vector_vector(result);
}