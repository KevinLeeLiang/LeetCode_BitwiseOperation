//
// Created by garen_lee on 2025/2/25.
/**
  ******************************************************************************
  * @file           : L136_singleNumber.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/25
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L136_SINGLENUMBER_H
#define BITWISEOPERATION_L136_SINGLENUMBER_H

#include "util.h"
class L136_singleNumber : public LeetcodeBitwiseOperation{
private:
    int singleNumber(vector<int>& nums);
public:
    L136_singleNumber() {};
    void test();
};


#endif //BITWISEOPERATION_L136_SINGLENUMBER_H
