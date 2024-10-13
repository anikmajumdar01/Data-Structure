#include <iostream>
#include "Queue.h"

using namespace std;
void printQueue(Queue<int> que)
{
    while (1)
    {
        cout << que.getFront() << " ";
        que.deQueue();
    }
}

void ReverseQueue(Queue<int>& que1)
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
    Queue<int> q1;
    while(1)
    {
        try
        {
            int val;
            cin>>val;
            q1.enQueue(val);
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

            ReverseQueue(q1);
            printQueue(q1);

        }
        catch(emptyQueue& e)
        {
            cout<<endl;
            cout<<"Queue is empty"<<endl;
            break;
        }
    }
    return 0;


}


