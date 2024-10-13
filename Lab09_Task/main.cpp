#include <iostream>
#include <string>
#include "StackType.h"

using namespace std;

int main()
{

    StackType<char> stck;
    int x = 97;
    while (x<123)
    {
        stck.Push(x);
        x++;
    }

    stck.reverse();

    cout<<"         Printing stack        "<<endl;
    cout<<"-------------------------------"<<endl;

    while(!stck.IsEmpty())
    {
        cout<<stck.Top()<<endl;
        stck.Pop();
    }
}

