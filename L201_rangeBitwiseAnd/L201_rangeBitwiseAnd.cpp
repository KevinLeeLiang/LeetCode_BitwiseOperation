//
// Created by garen_lee on 2025/3/18.
/**
  ******************************************************************************
  * @file           : L201_rangeBitwiseAnd.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/18
  ******************************************************************************
  */
//

#include "L201_rangeBitwiseAnd.h"

int L201_rangeBitwiseAnd::rangeBitwiseAnd(int left, int right) {
    int shift = 0;
    while (left < right) {
        left >>= 1;
        right >>= 1;
        ++shift;
    }
    return left << shift;
}

void L201_rangeBitwiseAnd::test() {
    int m = 5;
    int n = 7;
    int res = rangeBitwiseAnd(m, n);
    cout << "res: " << res << endl;
    m = 0;
    n = 0;
    res = rangeBitwiseAnd(m, n);
    cout << "res: " << res << endl;
    m = 1;
    n = 2147483647;
    res = rangeBitwiseAnd(m, n);
    cout << "res: " << res << endl;
    m = 9;
    n = 12;
    res = rangeBitwiseAnd(m, n);
    cout << "res: " << res << endl;
}