#include <gtest/gtest.h>
#include "BinaryTree.h"

template<typename T>
class MockBinaryTree : public BinaryTree<T> {
public:
    void push(const T& value) override { last_pushed = value; }
    void pop(const T& value) override { last_popped = value; }
    std::optional<T> search(const T& value) const override { return value; }

    T last_pushed{};
    T last_popped{};
};

TEST(BinaryTreeTest, PushStoresValue) {
    MockBinaryTree<int> tree;
    tree.push(42);
    EXPECT_EQ(tree.last_pushed, 42);
}

TEST(BinaryTreeTest, PopRemovesValue) {
    MockBinaryTree<int> tree;
    tree.pop(10);
    EXPECT_EQ(tree.last_popped, 10);
}

TEST(BinaryTreeTest, SearchFindsValue) {
    MockBinaryTree<int> tree;
    auto result = tree.search(7);
    ASSERT_TRUE(result.has_value());
    EXPECT_EQ(result.value(), 7);
}
