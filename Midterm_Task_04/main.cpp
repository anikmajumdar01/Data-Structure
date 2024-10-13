#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue<int> que;
    Queue<int> que1(MAX_SIZE);
    while(1)

    {
        try
        {
            int s;
            cout<<"Enter value: ";
            cin>>s;
            que1.enQueue(s);
        }
        catch(fullQueue& e)
        {
            cout<<"Queue is full"<<endl;
            break;
        }
    }


    while(1)
    {
        try
        {
            cout<<"   "<<que1.getFront();
            que1.deQueue();
        }

        catch(emptyQueue& e)
        {
            cout<<endl<<"Queue is empty"<<endl;
            break;
        }
    }
    return 0;

}
