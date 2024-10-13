#include <iostream>
#include "Queue.h"

using namespace std;
int printQueue(Queue que)
{
    int r=0,i=1;
    while (!que.isEmpty())
    {
        r=r+(que.getFront()*i);
        que.deQueue();
        i=i*10;
    }
    return r;
}

void ReverseQueue(Queue& que1)
{
    if (que1.isEmpty())
        return;
    int Value = que1.getFront();
    que1.deQueue();

    ReverseQueue(que1);

    que1.enQueue(Value);
}

int main()
{
    Queue q1;
    int val;
    cout<<"Enter a number: ";
    cin>>val;
    int r=val;
    while(val!=0)
    {
        q1.enQueue(val%10);
        val=val/10;
    }
    ReverseQueue(q1);
    int hold=printQueue(q1);
    if(r==hold)
    {
        cout<<"It's a Palindrome Number."<<endl;
    }
    else
    {
        cout<<"It's not a Palindrome Number."<<endl;
    }


    return 0;


}


