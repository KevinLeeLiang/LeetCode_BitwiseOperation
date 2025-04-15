//
// Created by garen_lee on 2025/4/15.
/**
  ******************************************************************************
  * @file           : L342_isPowerOfFour.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/15
  ******************************************************************************
  */
//

#include "L342_isPowerOfFour.h"

bool L342_isPowerOfFour::isPowerOfFour(int n) {
    return (n > 0) && ((n & (n - 1)) == 0) && ((n & 0x55555555) != 0);
}

void L342_isPowerOfFour::test() {
    int n = 16;
    bool res = isPowerOfFour(n);
    cout << res << endl;
    n = 5;
    res = isPowerOfFour(n);
    cout << res << endl;
    n = 1;
    res = isPowerOfFour(n);
    cout << res << endl;
}