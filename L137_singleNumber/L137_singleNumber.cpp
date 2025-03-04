//
// Created by garen_lee on 2025/3/4.
/**
  ******************************************************************************
  * @file           : L137_singleNumber.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/4
  ******************************************************************************
  */
//

#include "L137_singleNumber.h"

int L137_singleNumber::singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int i = 0; i < 32; ++i) {
        int total = 0;
        for (auto num : nums) {
            total += num >> i & 1;
        }
        if (total % 3) ans |= 1 << i;
    }
    return ans;
}

void L137_singleNumber::test() {
    vector<int> nums = {2,2,3,2};
    cout << singleNumber(nums) << endl;
    nums = {0,1,0,1,0,1,99};
    cout << singleNumber(nums) << endl;
}