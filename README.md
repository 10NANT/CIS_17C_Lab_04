# Lab 04 - Stacks

This lab implements the stack data structure using std::vector, demonstrating LIFO (Last In, First Out) behavior.

## Files in this Directory
- `google_test/`: Directory containing Google Test files
- Implementation files: `*.cpp` with TODO comments for student completion
- Documentation: `*.md` files with requirements, diagrams, and presentations
- `stacks.cpp`: Stack class template with TODO implementations
- `stacks_test.cpp`: Test suite with 8 comprehensive test cases
- `design_diagrams.md`: Stack operation visualizations
- `presentation.md`: Stack concepts and applications
- `requirements_document.md`: Detailed specifications

## Learning Objectives
- Understand LIFO principle
- Implement stack using existing data structures
- Handle stack operations and error conditions
- Apply stacks to problem-solving

## Stack Operations
- **push(value)**: Add element to top
- **pop()**: Remove top element
- **top()**: Access top element without removal
- **empty()**: Check if stack is empty
- **size()**: Get number of elements

## Implementation Instructions

## Testing Your Implementation

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
- Implement stack using linked list
- Add peek(n) to access nth element
- Implement min/max stack
- Create stack-based calculator

Master stacks as a foundation for more complex data structures!
## Testing Your Implementation

**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods, follow these steps to test your code:

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
You should see tests passing if your implementation is correct.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented.
- **Test failures**: Debug based on error messages.
- **Dependencies**: Verify Google Test installation.
