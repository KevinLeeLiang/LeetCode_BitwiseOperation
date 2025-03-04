//
// Created by garen_lee on 2025/3/4.
/**
  ******************************************************************************
  * @file           : L187_findRepeatedDnaSequences.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/4
  ******************************************************************************
  */
//

#include "L187_findRepeatedDnaSequences.h"

vector<string> L187_findRepeatedDnaSequences::findRepeatedDnaSequences(string s) {
    vector<string> ans;
    int n = s.length();
    if (n <= L) {
        return ans;
    }
    int x = 0;
    for (int i = 0; i < L - 1; ++i) {
        x = (x << 2) | bin[s[i]];
    }
    unordered_map<int, int> cnt;
    for (int i = 0; i <= n - L; ++i) {
        x = ((x << 2) | bin[s[i + L - 1]]) & ((1 << (L * 2)) - 1);
        if (++cnt[x] == 2) {
            ans.push_back(s.substr(i, L));
        }
    }
    return ans;
}

void L187_findRepeatedDnaSequences::test() {
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string> res = findRepeatedDnaSequences(s);
    print_vector(res);
    s = "AAAAAAAAAAAAA";
    res = findRepeatedDnaSequences(s);
    print_vector(res);
}