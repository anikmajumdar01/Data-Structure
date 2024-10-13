#include "stacktype.h"

StackType::StackType()
{
    top = -1;
}

bool StackType::IsEmpty()
{
    return (top == -1);
}

bool StackType::IsFull()
{
    //int lastIndex = MAX_ITEMS -1;
    return (top ==  MAX_ITEMS -1);
}

void StackType::Push(DynArr newItem)
{
    if(IsFull())
        cout<<"Stack is Full"<<endl;
    top++;
    items[top] = newItem;
}

void StackType::Pop()
{
    if(IsEmpty())
        cout<<"Stack is Empty"<<endl;
    top--;
}

DynArr StackType::Top()
{
    if (IsEmpty())
        cout<<"Stack is Empty"<<endl;
    return items[top];
}

