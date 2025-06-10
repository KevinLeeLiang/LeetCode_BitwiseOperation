//
// Created by garen_lee on 2025/6/10.
/**
  ******************************************************************************
  * @file           : L645_findErrorNums.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/10
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L645_FINDERRORNUMS_H
#define BITWISEOPERATION_L645_FINDERRORNUMS_H

#include "util.h"
class L645_findErrorNums : public LeetcodeBitwiseOperation {
private:
    vector<int> findErrorNums(vector<int>& nums);
public:
    L645_findErrorNums() {}
    void test();
};


#endif //BITWISEOPERATION_L645_FINDERRORNUMS_H
