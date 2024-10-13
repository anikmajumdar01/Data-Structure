#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

using namespace std;
class FullStack
{};
class EmptyStack
{};

template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };

public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
    void reverse();

private:
    NodeType* topPtr;
};

#include "StackType.tpp"
#endif // STACKTYPE_H_INCLUDED
