#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{
    DynArr Anik;
    DynArr Anik1(5);
    int val;
    cout<<"Enter the five values of Array: "<<endl;
    for(int i=0;i<Anik1.getSize();i++)
    {
        cin>>val;
        Anik1.setValue(i,val);
    }
    cout<<"------------Values that are stored in array----------------"<<endl;;
    for(int i=0;i<Anik1.getSize();i++)
    {
        cout<<Anik1.getValue(i)<<endl;
    }
    return 0;
}
