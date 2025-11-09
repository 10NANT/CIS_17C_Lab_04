#include <gtest/gtest.h>

// Include the student's implementation
#include "../trees.h"

// Test cases for inorderTraversal

TEST(InorderTraversalTest, EmptyTree) {
    TreeNode* root = nullptr;
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({}));
}

TEST(InorderTraversalTest, SingleNode) {
    TreeNode* root = new TreeNode(1);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({1}));
    delete root;
}

TEST(InorderTraversalTest, TwoNodesLeft) {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({1, 2}));
    delete root->left;
    delete root;
}

TEST(InorderTraversalTest, TwoNodesRight) {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({1, 2}));
    delete root->right;
    delete root;
}

TEST(InorderTraversalTest, ThreeNodesBalanced) {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({1, 2, 3}));
    delete root->left;
    delete root->right;
    delete root;
}

TEST(InorderTraversalTest, LeftSkewedTree) {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({1, 2, 3}));
    delete root->left->left;
    delete root->left;
    delete root;
}

TEST(InorderTraversalTest, RightSkewedTree) {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({1, 2, 3}));
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(InorderTraversalTest, ComplexTree) {
    //       4
    //      / \
    //     2   6
    //    / \ / \
    //   1  3 5  7
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({1, 2, 3, 4, 5, 6, 7}));
    // Clean up
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(InorderTraversalTest, TreeWithDuplicates) {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({1, 2, 2}));
    delete root->left;
    delete root->right;
    delete root;
}

TEST(InorderTraversalTest, NegativeValues) {
    TreeNode* root = new TreeNode(-2);
    root->left = new TreeNode(-3);
    root->right = new TreeNode(-1);
    std::vector<int> result = inorderTraversal(root);
    EXPECT_EQ(result, std::vector<int>({-3, -2, -1}));
    delete root->left;
    delete root->right;
    delete root;
}

// Tests for isBalanced

TEST(IsBalancedTest, EmptyTree) {
    TreeNode* root = nullptr;
    EXPECT_TRUE(isBalanced(root));
}

TEST(IsBalancedTest, SingleNode) {
    TreeNode* root = new TreeNode(1);
    EXPECT_TRUE(isBalanced(root));
    delete root;
}

TEST(IsBalancedTest, BalancedTwoLevels) {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    EXPECT_TRUE(isBalanced(root));
    delete root->left;
    delete root->right;
    delete root;
}

TEST(IsBalancedTest, BalancedThreeLevels) {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);
    EXPECT_TRUE(isBalanced(root));
    // Clean up
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(IsBalancedTest, LeftSkewedUnbalanced) {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    EXPECT_FALSE(isBalanced(root));
    delete root->left->left;
    delete root->left;
    delete root;
}

TEST(IsBalancedTest, RightSkewedUnbalanced) {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    EXPECT_FALSE(isBalanced(root));
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(IsBalancedTest, UnbalancedAtRoot) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    EXPECT_FALSE(isBalanced(root));
    delete root->left->left->left;
    delete root->left->left;
    delete root->left;
    delete root;
}

TEST(IsBalancedTest, BalancedAfterUnbalance) {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(5);
    EXPECT_TRUE(isBalanced(root));
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(IsBalancedTest, UnbalancedRightHeavy) {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    root->right->right->right = new TreeNode(4);
    EXPECT_FALSE(isBalanced(root));
    delete root->right->right->right;
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(IsBalancedTest, ComplexBalanced) {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);
    EXPECT_TRUE(isBalanced(root));
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;
}