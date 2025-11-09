// trees.h
#ifndef TREES_H
#define TREES_H

#include <vector>

// TreeNode structure
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Function to perform inorder traversal
std::vector<int> inorderTraversal(TreeNode* root);

// Function to check if binary tree is balanced
bool isBalanced(TreeNode* root);

#endif