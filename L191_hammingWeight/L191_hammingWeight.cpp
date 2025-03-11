//
// Created by garen_lee on 2025/3/11.
/**
  ******************************************************************************
  * @file           : L191_hammingWeight.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/11
  ******************************************************************************
  */
//

#include "L191_hammingWeight.h"

int L191_hammingWeight::hammingWeight(uint32_t n) {
    int res = 0;
    while (n) {
        res += (n & 1) ? 1 : 0;
        n >>= 1;
    }
    return res;
}

void L191_hammingWeight::test(){
    int n = 11;
    int res = hammingWeight(n);
    cout << res << endl;
    n = 128;
    res = hammingWeight(n);
    cout << res << endl;
    n = 2147483645;
    res = hammingWeight(n);
    cout << res << endl;
}