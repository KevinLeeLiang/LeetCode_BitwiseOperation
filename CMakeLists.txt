cmake_minimum_required(VERSION 3.17)
project(BitwiseOperation)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(BitwiseOperation main.cpp util/util.h test_factory.h L29_divide/L29_divide.cpp L29_divide/L29_divide.h L67_addBinary/L67_addBinary.cpp L67_addBinary/L67_addBinary.h L78_subsets/L78_subsets.cpp L78_subsets/L78_subsets.h L89_grayCode/L89_grayCode.cpp L89_grayCode/L89_grayCode.h)