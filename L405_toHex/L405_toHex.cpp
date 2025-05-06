//
// Created by garen_lee on 2025/5/6.
/**
  ******************************************************************************
  * @file           : L405_toHex.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/6
  ******************************************************************************
  */
//

#include "L405_toHex.h"

string L405_toHex::toHex(int num) {
    if (num == 0) {
        return "0";
    }
    string res;
    for (int i = 7; i >= 0; i--) {
        int val = (num >> (i * 4)) & 0xf;
        if (res.length() > 0  || val > 0) {
            char digit = val < 10 ? val + '0' : val - 10 + 'a';
            res.push_back(digit);
        }
    }
    return res;
}

void L405_toHex::test() {
    int num = 26;
    cout << toHex(num) << endl;
    num = -1;
    cout << toHex(num) << endl;
}