#include <iostream>
#include "unsortedtype.h"

using namespace std;
int main()
{
    UnsortedType <int>obj;
    int val;
    cout<<"Insert value into the list"<<endl;
    cout<<"--------------------------"<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>val;
        obj.InsertItem(val);
    }

    cout<<"List After insertion"<<endl;
    cout<<"----------------------"<<endl;
    int item;
    for(int i=0;i<obj.LengthIs();i++)
    {
        obj.GetNextItem(item);
        cout<<item<<"\t";
    }

    return 0;
}
