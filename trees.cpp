#include "trees.h"

void inorderHelper(TreeNode* node, std::vector<int>& result) {
	if (node == nullptr) {
		return;
	}
	inorderHelper(node->left, result);
	result.push_back(node->val);
	inorderHelper(node->right, result);
}

std::vector<int> inorderTraversal(TreeNode* root) {
	std::vector<int> result;
	inorderHelper(root, result);
	return result;
}

int height(TreeNode* node) {
	if (node == nullptr){
				return 0;
	}
	int leftHeight = height(node->left);
	if (leftHeight == -1) {
		return -1;
	}
	int rightHeight = height(node->right);
	if (rightHeight == -1) {
		return -1;
	}
	
	if(leftHeight - rightHeight > 1) {
		return -1;
	}
	if(rightHeight - leftHeight > 1) {
		return -1;
	}

	if(leftHeight > rightHeight) {
		return leftHeight + 1;
	} else {
		return rightHeight + 1;
	}
}	

bool isBalanced(TreeNode* node) {
	return height(node) != -1;
}