//
// Created by garen_lee on 2025/7/1.
/**
  ******************************************************************************
  * @file           : L779_kthGrammar.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/1
  ******************************************************************************
  */
//

#include "L779_kthGrammar.h"

int L779_kthGrammar::kthGrammar(int n, int k) {
    if (n == 1) {
        return 0;
    }
    return (k & 1) ^1 ^ kthGrammar(n - 1, (k + 1) / 2);
}

void L779_kthGrammar::test() {
    cout << kthGrammar(1, 1) << endl;
    cout << kthGrammar(2, 1) << endl;
    cout << kthGrammar(2, 2) << endl;
}