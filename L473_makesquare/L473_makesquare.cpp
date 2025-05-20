//
// Created by garen_lee on 2025/5/20.
/**
  ******************************************************************************
  * @file           : L473_makesquare.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/20
  ******************************************************************************
  */
//

#include "L473_makesquare.h"

bool L473_makesquare::dfs(vector<int> &matchsticks, vector<int> &edges, int index, int len) {
    if (index == matchsticks.size()) {
        return true;
    }
    for (int i = 0; i < 4; i++) {
        edges[i] += matchsticks[index];
        if (edges[i] <= len && dfs(matchsticks, edges, index + 1, len)) {
            return true;
        }
        edges[i] -= matchsticks[index];
    }
    return false;
}

bool L473_makesquare::makesquare(vector<int> &matchsticks) {
    int total = accumulate(matchsticks.begin(), matchsticks.end(), 0);
    if (total % 4 != 0) {
        return false;
    }
    int edge_len = total / 4;
    vector<int> edges(4, 0);
    sort(matchsticks.begin(), matchsticks.end(), greater<int>());
    return dfs(matchsticks, edges, 0, edge_len);
}

void L473_makesquare::test() {
    vector<int> matchsticks = {1,1,2,2,2};
    cout << makesquare(matchsticks) << endl;
    matchsticks = {3,3,3,3,4};
    cout << makesquare(matchsticks) << endl;
}