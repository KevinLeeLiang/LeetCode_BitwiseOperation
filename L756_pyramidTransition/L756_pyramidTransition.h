//
// Created by garen_lee on 2025/6/24.
/**
  ******************************************************************************
  * @file           : L756_pyramidTransition.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/24
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L756_PYRAMIDTRANSITION_H
#define BITWISEOPERATION_L756_PYRAMIDTRANSITION_H

#include "util.h"
class L756_pyramidTransition : public LeetcodeBitwiseOperation {
private:
    bool pyramidTransition(string bottom, vector<string>& allowed);
    bool gogogo(string bottom, string upper, int pos);
    unordered_map<string, vector<char>> mp;
public:
    L756_pyramidTransition() {}
    void test();
};


#endif //BITWISEOPERATION_L756_PYRAMIDTRANSITION_H
