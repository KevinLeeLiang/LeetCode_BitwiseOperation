//
// Created by garen-lee on 2025/4/29.
/**
  ******************************************************************************
  * @file           : L397_integerReplacement.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/29
  ******************************************************************************
  */
//

#include "L397_integerReplacement.h"

int L397_integerReplacement::integerReplacement(int n) {
    if (n == 1) {
        return 0;
    }
    if (n % 2 == 0) {
        return 1 + integerReplacement(n / 2);
    } else {
        return 2 + min(integerReplacement(n / 2), integerReplacement(n / 2 + 1));
    }
}

void L397_integerReplacement::test() {
    int n = 8;
    cout << integerReplacement(n) << endl;
    n = 7;
    cout << integerReplacement(n) << endl;
    n = 4;
    cout << integerReplacement(n) << endl;
}