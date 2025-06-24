//
// Created by garen_lee on 2025/6/24.
/**
  ******************************************************************************
  * @file           : L698_canPartitionKSubsets.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/24
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L698_CANPARTITIONKSUBSETS_H
#define BITWISEOPERATION_L698_CANPARTITIONKSUBSETS_H

#include "util.h"
class L698_canPartitionKSubsets : public LeetcodeBitwiseOperation {
private:
    bool canPartitionKSubsets(vector<int>& nums, int k);
public:
    L698_canPartitionKSubsets() {}
    void test();
};


#endif //BITWISEOPERATION_L698_CANPARTITIONKSUBSETS_H
