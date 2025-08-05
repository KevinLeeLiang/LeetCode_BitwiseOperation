//
// Created by garen_lee on 2025/8/5.
/**
  ******************************************************************************
  * @file           : L832_flipAndInvertImage.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/5
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L832_FLIPANDINVERTIMAGE_H
#define BITWISEOPERATION_L832_FLIPANDINVERTIMAGE_H

#include "util.h"
class L832_flipAndInvertImage : public LeetcodeBitwiseOperation {
private:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image);
public:
    L832_flipAndInvertImage() {}
    void test();
};


#endif //BITWISEOPERATION_L832_FLIPANDINVERTIMAGE_H
