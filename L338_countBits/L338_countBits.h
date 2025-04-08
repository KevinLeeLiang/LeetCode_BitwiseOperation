//
// Created by garen_lee on 2025/4/8.
/**
  ******************************************************************************
  * @file           : L338_countBits.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/8
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L338_COUNTBITS_H
#define BITWISEOPERATION_L338_COUNTBITS_H

#include "util.h"
class L338_countBits : public LeetcodeBitwiseOperation {
private:
    vector<int> countBits(int n);
    int countOnes(int x);
public:
    L338_countBits() {}
    void test();
};


#endif //BITWISEOPERATION_L338_COUNTBITS_H
