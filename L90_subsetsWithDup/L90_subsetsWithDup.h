//
// Created by garen_lee on 2025/2/25.
/**
  ******************************************************************************
  * @file           : L90_subsetsWithDup.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/25
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L90_SUBSETSWITHDUP_H
#define BITWISEOPERATION_L90_SUBSETSWITHDUP_H

#include "util.h"
class L90_subsetsWithDup : public LeetcodeBitwiseOperation{
private:
    vector<vector<int>> subsetsWithDup(vector<int>& nums);
    void subset(int p, vector<int> &nums, vector<int> &sub);
private:
    vector<vector<int>> res;
public:
    L90_subsetsWithDup(){}
    void test();

};


#endif //BITWISEOPERATION_L90_SUBSETSWITHDUP_H
