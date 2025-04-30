//
// Created by garen-lee on 2025/4/29.
/**
  ******************************************************************************
  * @file           : L401_readBinaryWatch.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/29
  ******************************************************************************
  */
//

#include "L401_readBinaryWatch.h"

vector<string> L401_readBinaryWatch::readBinaryWatch(int turnedOn) {
    vector<string> ans;
    for (int h = 0; h < 12; ++h) {
        for (int m = 0; m < 60; ++m) {
            if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
                ans.push_back(to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m));
            }
        }
    }
    return ans;
}

void L401_readBinaryWatch::test() {
    int turnedOn = 1;
    vector<string> res = readBinaryWatch(turnedOn);
    print_vector(res);
    turnedOn = 2;
    res = readBinaryWatch(turnedOn);
    print_vector(res);
}