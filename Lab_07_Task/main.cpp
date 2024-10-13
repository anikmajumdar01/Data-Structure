#include <iostream>
#include "stacktype.h"
using namespace std;

int main()
{
    StackType<float> stck;
    while(1)
    {
        try
        {
            float s;
            cin>>s;
            stck.Push(s);
        }
        catch(FullStack& e)
        {

            cout<<"Stack is full"<<endl;
            break;

        }
    }
    while(1)
    {


        try
        {
            cout<<"   "<<stck.Top();
            stck.Pop();
        }

        catch(EmptyStack& e)
        {
            cout<<endl<<"Stack is empty"<<endl;
            break;
        }
    }
    return 0;
}
