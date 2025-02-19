//
// Created by garen-lee on 2025/2/19.
/**
  ******************************************************************************
  * @file           : L78_subsets.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/19
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L78_SUBSETS_H
#define BITWISEOPERATION_L78_SUBSETS_H

#include "util.h"
class L78_subsets : public LeetcodeBitwiseOperation{
private:
    vector<vector<int>> subsets(vector<int>& nums);
public:
    L78_subsets() {}
    void test();

};


#endif //BITWISEOPERATION_L78_SUBSETS_H
