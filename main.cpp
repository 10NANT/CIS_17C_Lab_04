#include "trees.h"
#include <iostream>

int main() {
    // TODO: Add your own test code here if needed
    std::cout << "Implement the inorderTraversal and isBalanced functions and run the tests!" << std::endl;

    // Example: Create a simple binary tree
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Call inorderTraversal
    std::vector<int> result = inorderTraversal(root);

    // Print the result
    std::cout << "Inorder traversal: ";
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Check if balanced
    bool balanced = isBalanced(root);
    std::cout << "Is the tree balanced? " << (balanced ? "Yes" : "No") << std::endl;

    // Clean up memory (in a real scenario, use smart pointers or a destructor)
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}