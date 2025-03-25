//
// Created by garen_lee on 2025/3/25.
/**
  ******************************************************************************
  * @file           : L231_isPowerOfTwo.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/25
  ******************************************************************************
  */
//

#include "L231_isPowerOfTwo.h"

bool L231_isPowerOfTwo::isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

void L231_isPowerOfTwo::test() {
    cout << isPowerOfTwo(1) << endl;
    cout << isPowerOfTwo(16) << endl;
    cout << isPowerOfTwo(3) << endl;
}