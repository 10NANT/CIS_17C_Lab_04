# Design Diagrams for Binary Trees

## TreeNode Structure
```
TreeNode
- val: int
- left: TreeNode*
- right: TreeNode*
+ TreeNode(val: int)
+ TreeNode(val: int, left: TreeNode*, right: TreeNode*)

```

## Inorder Traversal Illustration
```
Tree:
   / \
  1   3

Inorder: [1, 2, 3]
- Visit left subtree (1)
- Visit root (2)
- Visit right subtree (3)
```

## Traversal Flowchart
- inorderTraversal: Recursive function
- If root null, return empty vector
- Traverse left subtree recursively
- Add root value to result vector
- Traverse right subtree recursively
