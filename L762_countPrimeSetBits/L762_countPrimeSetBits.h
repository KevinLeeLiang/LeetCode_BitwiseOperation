//
// Created by garen_lee on 2025/7/1.
/**
  ******************************************************************************
  * @file           : L762_countPrimeSetBits.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/1
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L762_COUNTPRIMESETBITS_H
#define BITWISEOPERATION_L762_COUNTPRIMESETBITS_H

#include "util.h"
class L762_countPrimeSetBits : public LeetcodeBitwiseOperation {
public:
    int countPrimeSetBits(int left, int right);
    bool isPrime(int x);
    L762_countPrimeSetBits() {}
    void test();
};


#endif //BITWISEOPERATION_L762_COUNTPRIMESETBITS_H
