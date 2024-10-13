#include <iostream>
#include "stacktype.h"

using namespace std;

StackType stck;

void taken_digit(int number)
{
    while(number!=0)
    {
        stck.Push(number%10);
        number=number/10;
    }
}

int Reversing(int number)
{
    taken_digit(number);
    int r=0;
    int i=1;

    while(!stck.IsEmpty())
    {
        r=r+(stck.Top()*i);
        stck.Pop();
        i=i*10;
    }
    return r;
}

int main()
{
    int num,hold;
    cout<<"Enter a number: ";
    cin>>num;
    hold=Reversing(num);
    if(num==hold)
    {
        cout<<"It's a palindrome number"<<endl;
    }
    else
    {
        cout<<"It's not a palindrome number"<<endl;
    }
    return 0;

}

