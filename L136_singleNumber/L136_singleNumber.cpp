//
// Created by garen_lee on 2025/2/25.
/**
  ******************************************************************************
  * @file           : L136_singleNumber.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/25
  ******************************************************************************
  */
//

#include "L136_singleNumber.h"
int L136_singleNumber::singleNumber(vector<int> &nums) {
    int res = 0;
    for (int i = 0; i < nums.size(); i++) {
        res ^= nums[i];
    }
    return res;
}
void L136_singleNumber::test(){
    vector<int> nums = {4,1,2,1,2};
    cout << singleNumber(nums) << endl;
    nums = {2,2,1};
    cout << singleNumber(nums) << endl;
}