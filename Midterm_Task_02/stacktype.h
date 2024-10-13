#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include <iostream>
using namespace std;
const int MAX_ITEMS = 100;


class StackType
{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(int);
    void Pop();
    int Top();
private:
    int top;
    int items[MAX_ITEMS];
};
#include "stacktype.tpp"
#endif // STACKTYPE_H_INCLUDED



