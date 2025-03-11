//
// Created by garen_lee on 2025/3/11.
/**
  ******************************************************************************
  * @file           : L190_reverseBits.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/11
  ******************************************************************************
  */
//

#include "L190_reverseBits.h"

uint32_t L190_reverseBits::reverseBits(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 32 & n > 0; i++) {
        result |= (n & 1) << (31 - i);
        n >>= 1;
    }
    return result;
}

void L190_reverseBits::test(){
    uint32_t n = 43261596;
    uint32_t result = reverseBits(n);
    std::cout << "result: " << result << std::endl;
    n = 4294967293;
    result = reverseBits(n);
    std::cout << "result: " << result << std::endl;
}