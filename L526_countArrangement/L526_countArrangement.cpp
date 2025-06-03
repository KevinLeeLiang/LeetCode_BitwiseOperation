//
// Created by garen_lee on 2025/6/3.
/**
  ******************************************************************************
  * @file           : L526_countArrangement.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/3
  ******************************************************************************
  */
//

#include "L526_countArrangement.h"

void L526_countArrangement::backtrack(int index, int n) {
    if (index == n + 1) {
        num++;
        return;
    }
    for (auto &x : match[index]) {
        if (!vis[x]) {
            vis[x] = true;
            backtrack(index + 1, n);
            vis[x] = false;
        }
    }
}

int  L526_countArrangement::countArrangement(int n) {
    vis.resize(n + 1);
    match.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % j == 0 || j % i == 0) {
                match[i].push_back(j);
            }
        }
    }
    backtrack(1, n);
    return num;
}

void L526_countArrangement::test() {
    int n = 2;
    int result = countArrangement(n);
    cout << "result: " << result << endl;
    n = 1;
    result = countArrangement(n);
    cout << "result: " << result << endl;
}