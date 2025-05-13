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
#include "L90_subsetsWithDup/L90_subsetsWithDup.h"
#include "L136_singleNumber/L136_singleNumber.h"
#include "L137_singleNumber/L137_singleNumber.h"
#include "L187_findRepeatedDnaSequences/L187_findRepeatedDnaSequences.h"
#include "L190_reverseBits/L190_reverseBits.h"
#include "L191_hammingWeight/L191_hammingWeight.h"
#include "L201_rangeBitwiseAnd/L201_rangeBitwiseAnd.h"
#include "L222_countNodes/L222_countNodes.h"
#include "L231_isPowerOfTwo/L231_isPowerOfTwo.h"
#include "L260_singleNumber/L260_signleNumber.h"
#include "L268_missingNumber/L268_missingNumber.h"
#include "L287_findDuplicate/L287_findDuplicate.h"
#include "L318_maxProduct/L318_maxProduct.h"
#include "L318_maxProduct/L318_maxProduct.h"
#include "L338_countBits/L338_countBits.h"
#include "L342_isPowerOfFour/L342_isPowerOfFour.h"
#include "L371_getSum/L371_getSum.h"
#include "L389_findTheDifference/L389_findTheDifference.h"
#include "L393_validUtf8/L393_validUtf8.h"
#include "L397_integerReplacement/L397_integerReplacement.h"
#include "L401_readBinaryWatch/L401_readBinaryWatch.h"
#include "L405_toHex/L405_toHex.h"
#include "L421_findMaximumXOR/L421_findMaximumXOR.h"
#include "L461_hammingDistance/L461_hammingDistance.h"
#include "L464_canIWin/L464_canIWin.h"

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
        } else if (title == "L90") {
            std::shared_ptr<L90_subsetsWithDup> tmp= std::make_shared<L90_subsetsWithDup>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L136") {
            std::shared_ptr<L136_singleNumber> tmp= std::make_shared<L136_singleNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L137") {
            std::shared_ptr<L137_singleNumber> tmp= std::make_shared<L137_singleNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L187") {
            std::shared_ptr<L187_findRepeatedDnaSequences> tmp= std::make_shared<L187_findRepeatedDnaSequences>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L190") {
            std::shared_ptr<L190_reverseBits> tmp= std::make_shared<L190_reverseBits>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L191") {
            std::shared_ptr<L191_hammingWeight> tmp= std::make_shared<L191_hammingWeight>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L201") {
            std::shared_ptr<L201_rangeBitwiseAnd> tmp= std::make_shared<L201_rangeBitwiseAnd>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L222") {
            std::shared_ptr<L222_countNodes> tmp= std::make_shared<L222_countNodes>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L231") {
            std::shared_ptr<L231_isPowerOfTwo> tmp= std::make_shared<L231_isPowerOfTwo>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L260") {
            std::shared_ptr<L260_signleNumber> tmp= std::make_shared<L260_signleNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L268") {
            std::shared_ptr<L268_missingNumber> tmp= std::make_shared<L268_missingNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L287") {
            std::shared_ptr<L287_findDuplicate> tmp= std::make_shared<L287_findDuplicate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L318") {
            std::shared_ptr<L318_maxProduct> tmp= std::make_shared<L318_maxProduct>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L318") {
            std::shared_ptr<L318_maxProduct> tmp= std::make_shared<L318_maxProduct>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L338") {
            std::shared_ptr<L338_countBits> tmp= std::make_shared<L338_countBits>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L342") {
            std::shared_ptr<L342_isPowerOfFour> tmp= std::make_shared<L342_isPowerOfFour>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L371") {
            std::shared_ptr<L371_getSum> tmp= std::make_shared<L371_getSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L389") {
            std::shared_ptr<L389_findTheDifference> tmp= std::make_shared<L389_findTheDifference>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L393") {
            std::shared_ptr<L393_validUtf8> tmp= std::make_shared<L393_validUtf8>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L397") {
            std::shared_ptr<L397_integerReplacement> tmp= std::make_shared<L397_integerReplacement>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L401") {
            std::shared_ptr<L401_readBinaryWatch> tmp= std::make_shared<L401_readBinaryWatch>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L405") {
            std::shared_ptr<L405_toHex> tmp= std::make_shared<L405_toHex>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L421") {
            std::shared_ptr<L421_findMaximumXOR> tmp= std::make_shared<L421_findMaximumXOR>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L461") {
            std::shared_ptr<L461_hammingDistance> tmp= std::make_shared<L461_hammingDistance>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBitwiseOperation>(tmp);
        } else if (title == "L464") {
            std::shared_ptr<L464_canIWin> tmp= std::make_shared<L464_canIWin>();
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
