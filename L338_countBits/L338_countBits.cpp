//
// Created by garen_lee on 2025/4/8.
/**
  ******************************************************************************
  * @file           : L338_countBits.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/8
  ******************************************************************************
  */
//

#include "L338_countBits.h"

int L338_countBits::countOnes(int x) {
    int ones = 0;
    while (x > 0) {
        x &= (x - 1);
        ones++;
    }
    return ones;
}

vector<int> L338_countBits::countBits(int n) {
    vector<int> res(n + 1);
    for (int i = 0; i <= n; ++i) {
        res[i] = countOnes(i);
    }
    return res;
}

void L338_countBits::test() {
    int n = 2;
    vector<int>res = countBits(n);
    print_vector(res);
    n = 5;
    res = countBits(n);
    print_vector(res);
}