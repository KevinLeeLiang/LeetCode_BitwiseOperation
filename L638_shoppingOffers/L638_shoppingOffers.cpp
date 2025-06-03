//
// Created by garen_lee on 2025/6/3.
/**
  ******************************************************************************
  * @file           : L638_shoppingOffers.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/3
  ******************************************************************************
  */
//

#include "L638_shoppingOffers.h"

int L638_shoppingOffers::dfs(vector<int> price,const vector<vector<int>> & special, vector<int> curNeeds, vector<vector<int>> & filterSpecial, int n) {
    if (!memo.count(curNeeds)) {
        int minPrice = 0;
        for (int i = 0; i < n; ++i) {
            minPrice += curNeeds[i] * price[i]; // 不购买任何大礼包，原价购买购物清单中的所有物品
        }
        for (auto & curSpecial : filterSpecial) {
            int specialPrice = curSpecial[n];
            vector<int> nxtNeeds;
            for (int i = 0; i < n; ++i) {
                if (curSpecial[i] > curNeeds[i]) { // 不能购买超出购物清单指定数量的物品
                    break;
                }
                nxtNeeds.emplace_back(curNeeds[i] - curSpecial[i]);
            }
            if (nxtNeeds.size() == n) { // 大礼包可以购买
                minPrice = min(minPrice, dfs(price, special, nxtNeeds, filterSpecial, n) + specialPrice);
            }
        }
        memo[curNeeds] = minPrice;
    }
    return memo[curNeeds];
}

int L638_shoppingOffers::shoppingOffers(vector<int> &price, vector<vector<int>> &special, vector<int> &needs) {
    int n = price.size();

    // 过滤不需要计算的大礼包，只保留需要计算的大礼包
    vector<vector<int>> filterSpecial;
    for (auto & sp : special) {
        int totalCount = 0, totalPrice = 0;
        for (int i = 0; i < n; ++i) {
            totalCount += sp[i];
            totalPrice += sp[i] * price[i];
        }
        if (totalCount > 0 && totalPrice > sp[n]) {
            filterSpecial.emplace_back(sp);
        }
    }

    return dfs(price, special, needs, filterSpecial, n);
}

void L638_shoppingOffers::test() {
    vector<int> price = {2, 5};
    vector<vector<int>> special = {{3, 0, 5}, {1, 2, 10}};
    vector<int> needs = {3, 2};
    memo.clear();
    cout << "result: " << shoppingOffers(price, special, needs) << endl;
    memo.clear();
    price = {2,3,4}, special = {{1,1,0,4},{2,2,1,9}}, needs = {1,2,1};
    cout << "result: " << shoppingOffers(price, special, needs) << endl;
}