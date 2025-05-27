//
// Created by garen_lee on 2025/5/27.
/**
  ******************************************************************************
  * @file           : L491_findSubsequences.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/27
  ******************************************************************************
  */
//

#include "L491_findSubsequences.h"

void L491_findSubsequences::findSubsequences(int mask, vector<int>& nums) {
    temp.clear();
    for (int i = 0; i < n; ++i) {
        if (mask & 1) {
            temp.push_back(nums[i]);
        }
        mask >>= 1;
    }
}

bool L491_findSubsequences::check() {
    for (int i = 1; i < temp.size(); ++i) {
        if (temp[i] < temp[i - 1]) {
            return false;
        }
    }
    return temp.size() >= 2;
}

int L491_findSubsequences::getHash(int base, int mod) {
    int hashValue = 0;
    for (const auto &x: temp) {
        hashValue = 1LL * hashValue * base % mod + (x + 101);
        hashValue %= mod;
    }
    return hashValue;
}

vector<vector<int>> L491_findSubsequences::findSubsequences(vector<int> &nums) {
    ans.clear();
    temp.clear();
    s.clear();
    n = nums.size();
    for (int i = 0; i < (1 << n); ++i) {
        findSubsequences(i, nums);
        int hashValue = getHash(263, int(1E9) + 7);
        if (check() && s.find(hashValue) == s.end()) {
            ans.push_back(temp);
            s.insert(hashValue);
        }
    }
    return ans;
}

void L491_findSubsequences::test() {
    vector<int> nums = {4, 6, 7, 7};
    vector<vector<int>> res = findSubsequences(nums);
    print_vector_vector(res);
    nums = {4,4,3,2,1};
    res = findSubsequences(nums);
    print_vector_vector(res);
}