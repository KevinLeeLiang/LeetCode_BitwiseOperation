//
// Created by garen_lee on 2025/4/15.
/**
  ******************************************************************************
  * @file           : L371_getSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/15
  ******************************************************************************
  */
//

#include "L371_getSum.h"

int L371_getSum::getSum(int a, int b) {
    while (b != 0) {
        int temp = (a & b) << 1;
        a = a ^ b;
        b = temp;
    }
    return a;
}

void L371_getSum::test() {
    cout << getSum(1, 2) << endl;
    cout << getSum(2, 3) << endl;
}