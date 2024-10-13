#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include <iostream>
#include "dynarr.h"
using namespace std;
const int MAX_ITEMS = 200;



class StackType
{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(DynArr newItem);
    void Pop();
    DynArr Top();
private:
    int top;
    DynArr items[MAX_ITEMS];
};
#include "stacktype.tpp"
#endif // STACKTYPE_H_INCLUDED

