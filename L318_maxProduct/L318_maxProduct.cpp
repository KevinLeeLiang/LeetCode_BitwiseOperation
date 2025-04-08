//
// Created by garen_lee on 2025/4/8.
/**
  ******************************************************************************
  * @file           : L318_maxProduct.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/8
  ******************************************************************************
  */
//

#include "L318_maxProduct.h"

int L318_maxProduct::maxProduct(vector<string> &words) {
    unordered_map<int,int> map;
    int length = words.size();
    for (int i = 0; i < length; i++) {
        int mask = 0;
        string word = words[i];
        int wordLength = word.size();
        for (int j = 0; j < wordLength; j++) {
            mask |= 1 << (word[j] - 'a');
        }
        if(map.count(mask)) {
            if (wordLength > map[mask]) {
                map[mask] = wordLength;
            }
        } else {
            map[mask] = wordLength;
        }
    }
    int maxProd = 0;
    for (auto [mask1, _] : map) {
        int wordLength1 = map[mask1];
        for (auto [mask2, _] : map) {
            if ((mask1 & mask2) == 0) {
                int wordLength2 = map[mask2];
                maxProd = max(maxProd, wordLength1 * wordLength2);
            }
        }
    }
    return maxProd;
}

void L318_maxProduct::test() {
    vector<string> words = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    cout << maxProduct(words) << endl;
    words = {"a", "ab", "abc", "d", "cd", "bcd", "abcd"};
    cout << maxProduct(words) << endl;
    words = {"a", "aa", "aaa", "aaaa"};
    cout << maxProduct(words) << endl;
}