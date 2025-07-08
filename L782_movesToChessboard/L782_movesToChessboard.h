//
// Created by garen_lee on 2025/7/8.
/**
  ******************************************************************************
  * @file           : L782_movesToChessboard.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/8
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L782_MOVESTOCHESSBOARD_H
#define BITWISEOPERATION_L782_MOVESTOCHESSBOARD_H

#include "util.h"
class L782_movesToChessboard : public LeetcodeBitwiseOperation {
private:
    int movesToChessboard(vector<vector<int>> &board);
    int getMoves(int mask, int count, int n);
public:
    L782_movesToChessboard() {}
    void test();
};


#endif //BITWISEOPERATION_L782_MOVESTOCHESSBOARD_H
