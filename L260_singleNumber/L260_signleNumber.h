//
// Created by garen_lee on 2025/3/25.
/**
  ******************************************************************************
  * @file           : L260_signleNumber.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/25
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L260_SIGNLENUMBER_H
#define BITWISEOPERATION_L260_SIGNLENUMBER_H

#include "util.h"
class L260_signleNumber : public LeetcodeBitwiseOperation {
private:
    vector<int> singleNumber(vector<int>& nums);
public:
    L260_signleNumber() {}
    void test();
};


#endif //BITWISEOPERATION_L260_SIGNLENUMBER_H
