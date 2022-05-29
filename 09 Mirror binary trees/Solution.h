#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <queue>

using namespace std;

class Solution {
private:
    
public:

    Solution() {}

    // Case1. Invert Binary Tree
    TreeNode* invertTree(TreeNode* root) {
        if(!root) {return NULL;}
        swap(root->right, root->left);
        invertTree(root->right);
        invertTree(root->left);
        return root;
    }

    // Case2. Symmetric Tree
    bool dfs(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return true;
        if (!t1 || !t2) return false;
        if (t1->val == t2->val) return dfs(t1->left, t2->right) && dfs(t1->right, t2->left) ? true : false;
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return dfs(root->right,root->left);
    }
    
};

#endif 