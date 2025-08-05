//
// Created by garen_lee on 2025/8/5.
/**
  ******************************************************************************
  * @file           : L832_flipAndInvertImage.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/5
  ******************************************************************************
  */
//

#include "L832_flipAndInvertImage.h"

vector<vector<int>> L832_flipAndInvertImage::flipAndInvertImage(vector<vector<int>>& image) {
    int n = image.size();
    for (int i = 0; i < n; ++i) {
        int left = 0, right = n - 1;
        while (left < right) {
            if (image[i][left] == image[i][right]) {
                image[i][left] ^= 1;
                image[i][right] ^= 1;
            }
            left ++;
            right --;
        }
        if (left == right) {
            image[i][left] ^= 1;
        }
    }
    return image;
}

void L832_flipAndInvertImage::test() {
    vector<vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> result = flipAndInvertImage(image);
    print_vector_vector(result);
    image = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, {1, 0, 1, 0}};
    result = flipAndInvertImage(image);
    print_vector_vector(result);
}