//
// Created by garen_lee on 2025/5/20.
/**
  ******************************************************************************
  * @file           : L473_makesquare.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/20
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L473_MAKESQUARE_H
#define BITWISEOPERATION_L473_MAKESQUARE_H

#include "util.h"
class L473_makesquare : public LeetcodeBitwiseOperation {
private:
    bool dfs(vector<int> &matchsticks, vector<int> &edges, int index, int len);
    bool makesquare(vector<int>& matchsticks);
public:
    L473_makesquare() {}
    void test();
};


#endif //BITWISEOPERATION_L473_MAKESQUARE_H
