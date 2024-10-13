#include <iostream>
#include "QueueType.h"
using namespace std;

int main()
{
    QueueType<int> que;
    cout<<"Enter how many numbers you want to insert: ";
    int n,x=0;
    cin>>n;
    int num;
    cout<<"Enter value: "<<endl;
    while(x<n)
    {
        cin>>num;
        que.EnQueue(num);
        x++;
    }
    que.reverse();

    cout<<"         Printing Queue After Reversing        "<<endl;
    cout<<"-----------------------------------------------"<<endl;
    int value;
    while(!que.IsEmpty())
    {
        que.DeQueue(value);
        cout<<value<<"   ";
    }

    return 0;
}
