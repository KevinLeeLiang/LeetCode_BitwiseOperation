//
// Created by garen_lee on 2025/5/13.
/**
  ******************************************************************************
  * @file           : L464_canIWin.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/13
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L464_CANIWIN_H
#define BITWISEOPERATION_L464_CANIWIN_H

#include "util.h"
class L464_canIWin : public LeetcodeBitwiseOperation {
private:
    bool canIWin(int maxChoosableInteger, int desiredTotal);
    bool canIWinHelper(int maxChoosableInteger, int desiredTotal, int chosen, unordered_map<int,bool>&memo);
public:
    L464_canIWin() {}
    void test();
};


#endif //BITWISEOPERATION_L464_CANIWIN_H
