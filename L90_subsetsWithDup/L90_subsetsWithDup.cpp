//
// Created by garen_lee on 2025/2/25.
/**
  ******************************************************************************
  * @file           : L90_subsetsWithDup.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/25
  ******************************************************************************
  */
//

#include "L90_subsetsWithDup.h"

void L90_subsetsWithDup::subset(int p, vector<int> &nums, vector<int> &sub) {
    res.push_back(sub);
    for (int i = p; i < nums.size(); i++) {
        if (i > p && nums[i] == nums[i - 1]) {
            continue;
        }
        sub.push_back(nums[i]);
        subset(i + 1, nums, sub);
        sub.pop_back();
    }
}

vector<vector<int>> L90_subsetsWithDup::subsetsWithDup(vector<int> &nums) {
    res.clear();
    sort(nums.begin(), nums.end());
    vector<int> sub;
    subset(0, nums, sub);
    return res;
}
void L90_subsetsWithDup::test(){
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = subsetsWithDup(nums);
    print_vector_vector(result);
    nums = {0};
    result = subsetsWithDup(nums);
    print_vector_vector(result);
}