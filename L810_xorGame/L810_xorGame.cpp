//
// Created by garen_lee on 2025/7/30.
/**
  ******************************************************************************
  * @file           : L810_xorGame.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/30
  ******************************************************************************
  */
//

#include "L810_xorGame.h"

bool L810_xorGame::xorGame(vector<int> &nums) {
    if (nums.size() % 2 == 0) {
        return true;
    }
    int xorsum = 0;
    for (int num : nums) {
        xorsum ^= num;
    }
    return xorsum == 0;
}

void L810_xorGame::test() {
    vector<int> nums = {1, 1, 2};
    cout << xorGame(nums) << endl;
    nums = {0, 1};
    cout << xorGame(nums) << endl;
    nums = {1, 2, 3};
    cout << xorGame(nums) << endl;
}