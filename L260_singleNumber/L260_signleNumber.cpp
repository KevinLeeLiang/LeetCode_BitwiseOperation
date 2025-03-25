//
// Created by garen_lee on 2025/3/25.
/**
  ******************************************************************************
  * @file           : L260_signleNumber.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/25
  ******************************************************************************
  */
//

#include "L260_signleNumber.h"

vector<int> L260_signleNumber::singleNumber(vector<int>& nums) {
    int xorsum = 0;
    for (int num: nums) {
        xorsum ^= num;
    }
    // 防止溢出
    int lsb = (xorsum == INT_MIN ? xorsum : xorsum & (-xorsum));
    int type1 = 0, type2 = 0;
    for (int num: nums) {
        if (num & lsb) {
            type1 ^= num;
        } else {
            type2 ^= num;
        }
    }
    return {type1, type2};
}

void L260_signleNumber::test(){
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    vector<int> res = singleNumber(nums);
    print_vector(res);
    nums = {-1, 0};
    res = singleNumber(nums);
    print_vector(res);
    nums = {0, 1};
    res = singleNumber(nums);
    print_vector(res);
}