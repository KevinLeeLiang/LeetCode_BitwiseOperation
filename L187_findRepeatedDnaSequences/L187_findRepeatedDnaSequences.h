//
// Created by garen_lee on 2025/3/4.
/**
  ******************************************************************************
  * @file           : L187_findRepeatedDnaSequences.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/4
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L187_FINDREPEATEDDNASEQUENCES_H
#define BITWISEOPERATION_L187_FINDREPEATEDDNASEQUENCES_H

#include "util.h"
class L187_findRepeatedDnaSequences : public LeetcodeBitwiseOperation {
private:
    const int L = 10;
    unordered_map<char, int> bin = {{'A', 0}, {'C', 1}, {'G', 2}, {'T', 3}};
private:
    vector<string> findRepeatedDnaSequences(string s);
public:
    L187_findRepeatedDnaSequences() {}
    void test();
};


#endif //BITWISEOPERATION_L187_FINDREPEATEDDNASEQUENCES_H
