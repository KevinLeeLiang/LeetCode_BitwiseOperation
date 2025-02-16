//
// Created by garen-lee on 2025/2/16.
/**
  ******************************************************************************
  * @file           : L67_addBinary.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/16
  ******************************************************************************
  */
//

#include "L67_addBinary.h"

string L67_addBinary::addBinary(string a, string b) {
    int count = a.size() > b.size() ? a.size() : b.size();
    string tt = a.size() < b.size() ? a : b;
    a = a.size() >= b.size() ? a : b;
    string tmp = "";
    for (int i = 0; i < count - tt.size(); ++i){
        tmp = tmp + '0';
    }
    tt = tmp + tt;
    char p = '0';
    string s = "";
    for (int i = 0; i < count; i++) {
        int t = count - 1 - i;
        if (int(a[t] + tt[t] + p) == 48*3){
            p = '0';
            s = '0' + s;
        }else if (int(a[t]) + int(tt[t]) + int(p) == 48*3+1){
            p = '0';
            s = '1' + s;
        } else if (int(a[t]) + int(tt[t]) + int(p) == 48*3+2){
            p = '1';
            s = '0' + s;
        } else if (int(a[t]) + int(tt[t]) + int(p) == 48*3+3) {
            p = '1';
            s = '1' + s;
        }
    }
    if (p == '1')
        s = '1' + s;

    return s;
}
void L67_addBinary::test() {
    string a, b;
    a = "11";
    b = "1";
    cout << addBinary(a, b) << endl;
    a = "1010";
    b = "1011";
    cout << addBinary(a, b) << endl;
}