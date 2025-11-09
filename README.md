# Lab 04 - Binary Trees

This lab implements binary tree inorder traversal and balanced binary tree check, focusing on tree traversal and balance algorithms in C++.

## Files in this Directory
- `google_test/`: Directory containing Google Test files
- Implementation files: `*.cpp` with TODO comments for student completion
- Documentation: `*.md` files with requirements, diagrams, and presentations
- `trees.cpp`: Template with TreeNode structure and tree function declarations
- `trees_test.cpp`: Google Test suite with 20 comprehensive test cases
- `design_diagrams.md`: Visual representations of binary tree operations
- `presentation.md`: Lecture notes on binary trees
- `requirements_document.md`: Detailed specifications

## Learning Objectives
- Master tree traversal algorithms
- Implement recursive and iterative tree traversals
- Understand binary tree structures
- Practice dynamic memory management for trees

## System Overview
The system implements two key binary tree algorithms:
- **TreeNode**: Contains integer data and left/right pointers
- **inorderTraversal(TreeNode* root)**: Returns vector of node values in inorder (left, root, right)
- **isBalanced(TreeNode* root)**: Checks if the binary tree is height-balanced



## Implementation Instructions



**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods in the `.cpp` file, follow these steps to test your code:

### Step 1: Navigate to the google_test directory
```bash
cd google_test
```

### Step 2: Compile the test executable
```bash
g++ *_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o test_executable
```

### Step 3: Run the tests
```bash
./test_executable
```

### Expected Output
You should see output like:
```
[==========] Running X tests from Y test suite.
...
[  PASSED  ] X tests.
```

If all tests pass, your implementation is correct! If tests fail, check your code against the TODO requirements and test expectations.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented with correct signatures.
- **Test failures**: Review the failing test messages and debug your implementation.
- **Missing dependencies**: Make sure Google Test is installed as described in the prerequisites.

Implement the Stack class methods according to the TODO comments:
- Use std::vector as underlying storage
- Handle empty stack conditions appropriately
- Maintain O(1) time complexity for all operations

## Testing Instructions
1. Install Google Test (see lab_01)
2. Compile: `g++ google_test/stacks_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o stacks_test`
3. Run: `./stacks_test`
4. Verify 8/8 tests pass

## Test Cases Explained
1. **Push**: Basic element addition
2. **Pop**: Element removal
3. **Top**: Access without removal
4. **Empty**: Empty state detection
5. **Size**: Element count tracking
6. **TopEmptyStack**: Exception handling
7. **PopEmptyStack**: Safe empty operations
8. **MultipleOperations**: Complex operation sequences

## Applications
- Function call stacks
- Expression evaluation (postfix)
- Undo mechanisms
- Browser back button
- Syntax parsing

## Key Properties
- LIFO access pattern
- O(1) push, pop, top operations
- Simple implementation
- Limited access (only top element)

## Common Issues
- Forgetting empty checks before pop/top
- Incorrect exception types
- Not updating size properly

## Extensions
- Implement iterative inorder traversal
- Add tree height calculation
- Implement tree serialization
- Create binary search tree operations

Master tree algorithms as a foundation for more complex data structures!
