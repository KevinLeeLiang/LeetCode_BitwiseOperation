//
// Created by garen_lee on 2025/5/27.
/**
  ******************************************************************************
  * @file           : L491_findSubsequences.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/27
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L491_FINDSUBSEQUENCES_H
#define BITWISEOPERATION_L491_FINDSUBSEQUENCES_H

#include "util.h"
class L491_findSubsequences : public   LeetcodeBitwiseOperation {
private:
    vector<vector<int>> findSubsequences(vector<int>& nums);
    vector<int> temp;
    vector<vector<int>> ans;
    unordered_set<int> s;
    int n;

    void findSubsequences(int mask, vector<int>& nums) ;

    bool check() ;

    int getHash(int base, int mod);

public:
    L491_findSubsequences() {}
    void test();
};


#endif //BITWISEOPERATION_L491_FINDSUBSEQUENCES_H
