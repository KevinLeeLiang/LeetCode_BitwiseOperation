//
// Created by garen_lee on 2025/6/3.
/**
  ******************************************************************************
  * @file           : L638_shoppingOffers.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/3
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L638_SHOPPINGOFFERS_H
#define BITWISEOPERATION_L638_SHOPPINGOFFERS_H

#include "util.h"
class L638_shoppingOffers : public LeetcodeBitwiseOperation {
private:
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs);
    int dfs(vector<int> price,const vector<vector<int>> & special, vector<int> curNeeds, vector<vector<int>> & filterSpecial, int n);
private:
    map<vector<int>, int> memo;
public:
    L638_shoppingOffers() {}
    void test();
};


#endif //BITWISEOPERATION_L638_SHOPPINGOFFERS_H
