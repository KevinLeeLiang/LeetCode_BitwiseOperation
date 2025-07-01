//
// Created by garen_lee on 2025/7/1.
/**
  ******************************************************************************
  * @file           : L762_countPrimeSetBits.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/1
  ******************************************************************************
  */
//

#include "L762_countPrimeSetBits.h"

bool L762_countPrimeSetBits::isPrime(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int L762_countPrimeSetBits::countPrimeSetBits(int left, int right) {
    int ans = 0;
    for (int i = left; i <= right; ++i) {
        if (isPrime(__builtin_popcount(i))) {
            ++ans;
        }
    }
    return ans;
}

void L762_countPrimeSetBits::test() {
    cout << countPrimeSetBits(6, 10) << endl;
    cout << countPrimeSetBits(10, 15) << endl;
}