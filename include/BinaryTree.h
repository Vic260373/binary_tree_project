#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <optional>

template<typename T>
class BinaryTree {
public:
    virtual ~BinaryTree() = default;

    virtual void push(const T& value) = 0;
    virtual void pop(const T& value) = 0;
    virtual std::optional<T> search(const T& value) const = 0;
};

#endif // BINARY_TREE_H
