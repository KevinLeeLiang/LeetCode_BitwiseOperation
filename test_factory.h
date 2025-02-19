//
// Created by garen-lee on 2025/2/15.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/15
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_TEST_FACTORY_H
#define BITWISEOPERATION_TEST_FACTORY_H
#include <memory>
#include "L29_divide/L29_divide.h"
#include "L67_addBinary/L67_addBinary.h"
#include "L78_subsets/L78_subsets.h"
#include "L89_grayCode/L89_grayCode.h"
using namespace std;
class test_factory {

private:
    void buildSolution(string title) {
        if (title == "L29") {
            std::shared_ptr<L29_divide> tmp= std::make_shared<L29_divide>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L67") {
            std::shared_ptr<L67_addBinary> tmp= std::make_shared<L67_addBinary>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L78") {
            std::shared_ptr<L78_subsets> tmp= std::make_shared<L78_subsets>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L89") {
            std::shared_ptr<L89_grayCode> tmp= std::make_shared<L89_grayCode>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeBitwiseOperation> solution_;
};
#endif //BITWISEOPERATION_TEST_FACTORY_H
