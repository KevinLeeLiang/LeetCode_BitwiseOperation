//
// Created by garen_lee on 2025/6/24.
/**
  ******************************************************************************
  * @file           : L756_pyramidTransition.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/24
  ******************************************************************************
  */
//

#include "L756_pyramidTransition.h"
bool L756_pyramidTransition::gogogo(string bottom, string upper, int pos){
    if(pos == bottom.size()-1){
        if(upper.size() == 1) return true;
        bottom = upper;
        upper = "";
        pos = 0;
    }
    vector<char>& vc= mp[bottom.substr(pos, 2)];
    if(vc.empty()) return false;
    else{
        for(int i = 0; i < vc.size(); i++){
            if(gogogo(bottom, upper + vc[i], pos+1)) return true;
        }
    }
    return false;
}

bool L756_pyramidTransition::pyramidTransition(string bottom, vector<string> &allowed) {
    mp.clear();
    for(string str:allowed){
        mp[str.substr(0, 2)].push_back(str.back());
    }
    string upper = "";
    return gogogo(bottom, upper, 0);
}


void L756_pyramidTransition::test() {
    string botton = "BCD";
    vector<string> allowed = {"BCC", "CDE", "CEA", "FFF"};
    cout << pyramidTransition(botton, allowed) << endl;
    botton = "AAAA";
    allowed = {"AAB","AAC","BCD","BBE","DEF"};
    cout << pyramidTransition(botton, allowed) << endl;
}