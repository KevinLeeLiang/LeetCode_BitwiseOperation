//
// Created by garen_lee on 2025/4/22.
/**
  ******************************************************************************
  * @file           : L393_validUtf8.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/22
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L393_VALIDUTF8_H
#define BITWISEOPERATION_L393_VALIDUTF8_H

#include "util.h"
class L393_validUtf8 : public LeetcodeBitwiseOperation {
private:
    bool validUtf8(vector<int>& data);
    bool isValid(int num);
    int getBytes(int num);
public:
    L393_validUtf8() {}
    void test();
};


#endif //BITWISEOPERATION_L393_VALIDUTF8_H
