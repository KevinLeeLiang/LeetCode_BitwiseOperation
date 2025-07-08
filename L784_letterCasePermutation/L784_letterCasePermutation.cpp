//
// Created by garen_lee on 2025/7/8.
/**
  ******************************************************************************
  * @file           : L784_letterCasePermutation.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/8
  ******************************************************************************
  */
//

#include "L784_letterCasePermutation.h"

vector<string> L784_letterCasePermutation::letterCasePermutation(string s) {
    vector<string>ans;
    queue<string>qu;
    qu.emplace("");
    while (!qu.empty()) {
        string &curr = qu.front();
        if (curr.size() == s.size()) {
            ans.emplace_back(curr);
            qu.pop();
        } else {
            int pos = curr.size();
            if (isalpha(s[pos])) {
                string next = curr;
                next.push_back(s[pos] ^ 32);
                qu.emplace(next);
            }
            curr.push_back(s[pos]);
        }
    }
    return ans;
}

void L784_letterCasePermutation::test() {
    string s = "a1b2";
    vector<string> res = letterCasePermutation(s);
    print_vector(res);
    s = "3z4";
    res = letterCasePermutation(s);
    print_vector(res);
}