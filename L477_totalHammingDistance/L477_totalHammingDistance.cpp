//
// Created by garen_lee on 2025/5/27.
/**
  ******************************************************************************
  * @file           : L477_totalHammingDistance.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/27
  ******************************************************************************
  */
//

#include "L477_totalHammingDistance.h"

int L477_totalHammingDistance::totalHammingDistance(vector<int> &nums) {
    int res = 0;
    for (int i = 0; i < 32; ++i) {
        int cnt = 0;
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] & (1 << i)) {
                cnt++;
            }
        }
        res += cnt * (nums.size() - cnt);
    }
    return res;
}

void L477_totalHammingDistance::test() {
    vector<int> nums = {4, 14, 2};
    cout << totalHammingDistance(nums) << endl;
    nums = {4, 14, 4};
    cout << totalHammingDistance(nums) << endl;
}