//
// Created by garen_lee on 2025/5/20.
/**
  ******************************************************************************
  * @file           : L476_findComplement.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/20
  ******************************************************************************
  */
//

#include "L476_findComplement.h"

int L476_findComplement::findComplement(int num) {
    int highbit = 0;
    for (int i = 1; i <= 30; ++i) {
        if (num >= (1 << i)) {
            highbit = i;
        } else {
            break;
        }
    }
    int mask = (highbit == 30 ? 0x7fffffff : (1 << (highbit + 1)) - 1);
    return num ^ mask;
}

void L476_findComplement::test() {
    int num = 5;
    int res = findComplement(num);
    cout << "num:" << num << " res:" << res << endl;
    num= 1;
    res = findComplement(num);
    cout << "num:" << num << " res:" << res << endl;
}