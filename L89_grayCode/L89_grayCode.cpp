//
// Created by garen-lee on 2025/2/19.
/**
  ******************************************************************************
  * @file           : L89_grayCode.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/19
  ******************************************************************************
  */
//

#include "L89_grayCode.h"

vector<int> L89_grayCode::grayCode(int n) {
    vector<int> res;
    res.reserve(1 << n);
    res.push_back(0);
    for (int i = 1; i <= n; ++i) {
        int m = res.size();
        for (int j = m - 1; j >= 0; --j) {
            res.push_back(res[j] | (1 << (i - 1)));
        }
    }
    return res;
}

void L89_grayCode::test() {
    int n = 2;
    vector<int> res = grayCode(n);
    print_vector(res);
    n = 1;
    res = grayCode(n);
    print_vector(res);
}