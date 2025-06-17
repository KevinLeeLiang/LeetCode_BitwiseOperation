//
// Created by garen_lee on 2025/6/17.
/**
  ******************************************************************************
  * @file           : L693_hasAlternatingBits.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/17
  ******************************************************************************
  */
//

#include "L693_hasAlternatingBits.h"

bool L693_hasAlternatingBits::hasAlternatingBits(int n) {
    int pre = n & 1;
    n >>= 1;
    while (n) {
        int cur = n & 1;
        if (cur == pre) {
            return false;
        }
        pre = cur;
        n >>= 1;
    }
    return true;
}

void L693_hasAlternatingBits::test() {
    int n = 5;
    cout << hasAlternatingBits(n) << endl;
    n = 7;
    cout << hasAlternatingBits(n) << endl;
    n = 11;
    cout << hasAlternatingBits(n) << endl;
}