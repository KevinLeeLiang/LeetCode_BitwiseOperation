//
// Created by garen_lee on 2025/5/13.
/**
  ******************************************************************************
  * @file           : L461_hammingDistance.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/13
  ******************************************************************************
  */
//

#include "L461_hammingDistance.h"

int L461_hammingDistance::hammingDistance(int x, int y) {
    int xory = x ^ y;
    int ans = 0;
    while (xory) {
        ans += xory & 1;
        xory >>= 1;
    }
    return ans;
}


void L461_hammingDistance::test() {
    int x = 1;
    int y = 4;
    int res = hammingDistance(x, y);
    cout << res << endl;
    x = 3;
    y = 1;
    res = hammingDistance(x, y);
    cout << res << endl;
}