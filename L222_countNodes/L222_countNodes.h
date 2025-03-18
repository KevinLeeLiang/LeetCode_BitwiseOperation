//
// Created by garen_lee on 2025/3/18.
/**
  ******************************************************************************
  * @file           : L222_countNodes.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/18
  ******************************************************************************
  */
//

#ifndef BITWISEOPERATION_L222_COUNTNODES_H
#define BITWISEOPERATION_L222_COUNTNODES_H

#include "util.h"
class L222_countNodes : public LeetcodeBitwiseOperation {
private:
    bool exists(TreeNode* root, int level, int k);
    int countNodes(TreeNode *root);
public:
    L222_countNodes() {}
    void test();
};


#endif //BITWISEOPERATION_L222_COUNTNODES_H
