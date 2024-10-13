#include <iostream>
#include "StackType.h"
#include"string.h"
using namespace std;

int main()
{
    StackType<int> stck;
    string value;
    cout<<"Enter the expression: "<<endl;
    cin>>value;
    cout<<endl;
    int Position=0,count=0,condition1=0,condition2=0;
    for(int i=0;i<value.length();i++)
    {
        if(value[i]=='(')
        {
            stck.Push(i);
            Position++;
        }

        else if(value[i]==')')
        {
            count++;
            if(!stck.IsEmpty()&&value[stck.Top()]=='(')
            {
                stck.Pop();
            }

            else
            {
                value[i]='_';
                condition2=1;
            }
        }

        else continue;
    }

    while(!stck.IsEmpty())
    {
        Position++;
        value[stck.Top()]='_';
        stck.Pop();
    }

    if(Position!=count)
        condition1=1;
    if(condition1==1&&condition2==1)
    {
        cout<<"This is an imbalanced expression. This violates both properties."<<endl<<endl;
        cout<<"Modified String: "<<value<<endl;

    }

    else if(condition1==1)
    {
        cout<<"This is an imbalanced expression. This violates property 1"<<endl<<endl;
        cout<<"Modified String: "<<value<<endl;
    }

    else if(condition2==1)
    {
        cout<<"This is an imbalanced expression. This violates property 2"<<endl<<endl;
        cout<<"Modified String: "<<value<<endl;
    }
    else
    {
        cout<<"This is a parenthesis balanced expression."<<endl;
    }
    return 0;
}
