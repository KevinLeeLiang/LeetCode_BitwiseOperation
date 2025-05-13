//
// Created by garen_lee on 2025/5/13.
/**
  ******************************************************************************
  * @file           : L464_canIWin.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/13
  ******************************************************************************
  */
//

#include "L464_canIWin.h"

bool L464_canIWin::canIWinHelper(int maxChoosableInteger, int desiredTotal, int chosen, unordered_map<int,bool>&memo) {
    if (memo.find(chosen) != memo.end()) {
        return memo[chosen];
    }
    for (int i = 1; i <= maxChoosableInteger; i++) {
        int mask = 1 << (i - 1);
        if ((chosen & mask) == 0) {
            if (i >= desiredTotal || !canIWinHelper(maxChoosableInteger, desiredTotal - i, chosen | mask, memo)) {
                memo[chosen] = true;
                return true;
            }
        }
    }
    memo[chosen] = false;
    return false;
}

bool L464_canIWin::canIWin(int maxChoosableInteger, int desiredTotal) {
    if (maxChoosableInteger >= desiredTotal) {
        return true;
    }
    int sum = maxChoosableInteger * (maxChoosableInteger + 1) / 2;
    if (sum < desiredTotal) {
        return false;
    }
    unordered_map<int, bool> memo;
    return canIWinHelper(maxChoosableInteger, desiredTotal, 0, memo);
}

void L464_canIWin::test() {
    cout << canIWin(10, 11) << endl;
    cout << canIWin(10, 1) << endl;
}