// Lab 04: Stacks
// Implement a stack using std::vector
// Complete the TODO sections
// Test with: g++ stacks_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o stacks_test && ./stacks_test

#include <iostream>
#include <vector>

// TODO: Include <stdexcept> for exceptions

class Stack {
private:
    std::vector<int> data;

public:
    void push(int value) {
        // TODO: Add value to the end of vector
    }

    void pop() {
        // TODO: Remove from end if not empty
    }

    int top() const {
        // TODO: Return last element, throw if empty
    }

    bool empty() const {
        // TODO: Check if vector is empty
    }

    size_t size() const {
        // TODO: Return vector size
    }
};

int main() {
    // TODO: Test your stack
    Stack s;
    std::cout << "Implement the Stack class!" << std::endl;
    return 0;
}
