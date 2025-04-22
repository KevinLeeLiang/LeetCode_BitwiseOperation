//
// Created by garen_lee on 2025/4/22.
/**
  ******************************************************************************
  * @file           : L393_validUtf8.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/22
  ******************************************************************************
  */
//

#include "L393_validUtf8.h"
static const int MASK1 = 1 << 7;
static const int MASK2 = (1 << 7) + (1 << 6);
bool L393_validUtf8::isValid(int num) {
    return (num & MASK2) == MASK1;
}

int L393_validUtf8::getBytes(int num) {
    if ((num & MASK1) == 0) {
        return 1;
    }
    int n = 0;
    int mask = MASK1;
    while ((num & mask) != 0) {
        n++;
        if (n > 4) {
            return -1;
        }
        mask >>= 1;
    }
    return n >= 2 ? n : -1;
}

bool L393_validUtf8::validUtf8(vector<int> &data) {
    int m = data.size();
    int index = 0;
    while (index < m) {
        int num = data[index];
        int n = getBytes(num);
        if (n < 0 || index + n > m) {
            return false;
        }
        for (int i = 1; i < n; i++) {
            if (!isValid(data[index + i])) {
                return false;
            }
        }
        index += n;
    }
    return true;

}

void L393_validUtf8::test() {
    vector<int> data = {197, 130, 1};
    cout << validUtf8(data) << endl;
    data = {235, 140, 4};
    cout << validUtf8(data) << endl;
}

