#include "stacktype.h"
#include<iostream>
using namespace std;

StackType::StackType()
{
    top =-1;
}


bool StackType::IsEmpty()
{
    return (top == -1);
}


bool StackType::IsFull()
{
    return (top == MAX_ITEMS-1);
}


void StackType::Push(int newItem)
{
    if(IsFull())
        cout<<"Stack is Full"<<endl;
    else
    {
        top++;
        items[top] = newItem;
    }
}

void StackType::Pop()
{
    if(IsEmpty())
        cout<<"Stack is empty"<<endl;
    else
        top--;
}


int StackType::Top()
{
    return items[top];
}


