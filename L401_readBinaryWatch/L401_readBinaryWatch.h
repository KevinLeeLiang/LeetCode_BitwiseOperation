//
// Created by garen-lee on 2025/4/29.
/**
  ******************************************************************************
  * @file           : L401_readBinaryWatch.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/29
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L401_READBINARYWATCH_H
#define BITWISEOPERATION_L401_READBINARYWATCH_H

#include "util.h"
class L401_readBinaryWatch : public LeetcodeBitwiseOperation {
private:
    vector<string> readBinaryWatch(int turnedOn);
public:
    L401_readBinaryWatch() {}
    void test();
};


#endif //BITWISEOPERATION_L401_READBINARYWATCH_H
