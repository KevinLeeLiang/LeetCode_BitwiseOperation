//
// Created by garen_lee on 2025/5/6.
/**
  ******************************************************************************
  * @file           : L405_toHex.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/6
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L405_TOHEX_H
#define BITWISEOPERATION_L405_TOHEX_H

#include "util.h"
class L405_toHex : public LeetcodeBitwiseOperation {
private:
    string toHex(int num);
public:
    L405_toHex() {}
    void test();
};


#endif //BITWISEOPERATION_L405_TOHEX_H
