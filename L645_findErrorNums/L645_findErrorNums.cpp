//
// Created by garen_lee on 2025/6/10.
/**
  ******************************************************************************
  * @file           : L645_findErrorNums.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/10
  ******************************************************************************
  */
//

#include "L645_findErrorNums.h"

vector<int> L645_findErrorNums::findErrorNums(vector<int> &nums) {
    vector<int> res;
    int n = nums.size();
    unordered_set<int> set;
    for (int i = 0; i < n; i++) {
        if (set.count(nums[i])) {
            res.push_back(nums[i]);
        } else {
            set.insert(nums[i]);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!set.count(i)) {
            res.push_back(i);
        }
    }
    return res;
}

void L645_findErrorNums::test() {
    vector<int> nums = {1, 2, 2, 4};
    vector<int> res = findErrorNums(nums);
    print_vector(res);
    nums = {1, 1};
    res = findErrorNums(nums);
    print_vector(res);
}