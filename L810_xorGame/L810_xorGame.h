//
// Created by garen_lee on 2025/7/30.
/**
  ******************************************************************************
  * @file           : L810_xorGame.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/30
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L810_XORGAME_H
#define BITWISEOPERATION_L810_XORGAME_H

#include "util.h"
class L810_xorGame : public LeetcodeBitwiseOperation {
private:
    bool xorGame(vector<int> &nums);
public:
    L810_xorGame() {}
    void test();
};


#endif //BITWISEOPERATION_L810_XORGAME_H
