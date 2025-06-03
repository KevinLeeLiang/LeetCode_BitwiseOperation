//
// Created by garen_lee on 2025/6/3.
/**
  ******************************************************************************
  * @file           : L526_countArrangement.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/3
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L526_COUNTARRANGEMENT_H
#define BITWISEOPERATION_L526_COUNTARRANGEMENT_H

#include "util.h"
class L526_countArrangement : public LeetcodeBitwiseOperation {
private:
    vector<vector<int>> match;
    vector<int> vis;
    int num;
private:
    int countArrangement(int n);
    void backtrack(int index, int n);
public:
    L526_countArrangement() {}
    void test();
};


#endif //BITWISEOPERATION_L526_COUNTARRANGEMENT_H
