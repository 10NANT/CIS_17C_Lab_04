//// trees.cpp
//#include "trees.h"
//
//std::vector<int> inorderTraversal(TreeNode* root) {
//    // TODO: Implement inorder traversal of the binary tree
//    // Inorder traversal visits nodes in the order: left, root, right
//    // Return a vector containing the inorder traversal of the tree's node values
//    
//    // You can implement this recursively or iteratively
//    // Recursive approach:
//    // - If root is null, return empty vector
//    // - Recurse on left subtree
//    // - Visit root
//    // - Recurse on right subtree
//    
//    // Iterative approach using a stack:
//    // - Use a stack to simulate recursion
//    // - Traverse to the leftmost node, pushing nodes to stack
//    // - Pop nodes, visit them, and move to right subtree
//    
//    // For now, return an empty vector to avoid compilation errors
//    return {};
//}
//
//bool isBalanced(TreeNode* root) {
//    // TODO: Implement function to check if binary tree is balanced
//    // A height-balanced binary tree is one where the depth of the two subtrees
//    // of every node never differs by more than one
//    
//    // You can implement this recursively
//    // Helper function to compute height and check balance
//    // Return -1 if not balanced, else height
//    
//    // For now, return true to avoid compilation errors
//    return true;
//}