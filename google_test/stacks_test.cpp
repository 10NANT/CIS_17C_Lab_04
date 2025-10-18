#include <gtest/gtest.h>

// Include the student's implementation
#include "../stacks.cpp"

// Test cases

TEST(StackTest, Push) {
    Stack s;
    s.push(1);
    EXPECT_EQ(s.size(), 1);
    EXPECT_EQ(s.top(), 1);
}

TEST(StackTest, Pop) {
    Stack s;
    s.push(1);
    s.push(2);
    s.pop();
    EXPECT_EQ(s.size(), 1);
    EXPECT_EQ(s.top(), 1);
}

TEST(StackTest, Top) {
    Stack s;
    s.push(5);
    EXPECT_EQ(s.top(), 5);
    s.push(10);
    EXPECT_EQ(s.top(), 10);
}

TEST(StackTest, Empty) {
    Stack s;
    EXPECT_TRUE(s.empty());
    s.push(1);
    EXPECT_FALSE(s.empty());
}

TEST(StackTest, Size) {
    Stack s;
    EXPECT_EQ(s.size(), 0);
    s.push(1);
    EXPECT_EQ(s.size(), 1);
    s.push(2);
    EXPECT_EQ(s.size(), 2);
    s.pop();
    EXPECT_EQ(s.size(), 1);
}

TEST(StackTest, TopEmptyStack) {
    Stack s;
    EXPECT_THROW(s.top(), std::out_of_range);
}

TEST(StackTest, PopEmptyStack) {
    Stack s;
    s.pop();
    EXPECT_TRUE(s.empty());
}

TEST(StackTest, MultipleOperations) {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    EXPECT_EQ(s.size(), 3);
    EXPECT_EQ(s.top(), 3);
    s.pop();
    EXPECT_EQ(s.top(), 2);
    s.pop();
    EXPECT_EQ(s.top(), 1);
    s.pop();
    EXPECT_TRUE(s.empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
