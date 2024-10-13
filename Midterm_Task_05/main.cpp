#include <iostream>
#include "stacktype.h"
#include "dynarr.h"
using namespace std;

int main()
{
    DynArr Array1(2);
    DynArr Array2(3);
    DynArr Array3(4);
    StackType Stck;
    cout<<"Enter two elements of Array1: "<<endl;
    cout<<"-------------------------------"<<endl;
    for(int i=0;i<Array1.getSize();i++)
    {
       int value1;
       cin>>value1;
       Array1.setValue(i,value1);
    }

    cout<<"Enter three elements of Array2: "<<endl;
    cout<<"-------------------------------"<<endl;
    for(int j=0;j<Array2.getSize();j++)
    {
       int value2;
       cin>>value2;
       Array2.setValue(j,value2);
    }

    cout<<"Enter four elements of Array3: "<<endl;
    cout<<"-------------------------------"<<endl;
    for(int k=0;k<Array3.getSize();k++)
    {
       int value3;
       cin>>value3;
       Array3.setValue(k,value3);
    }

    Stck.Push(Array1);
    Stck.Push(Array2);
    Stck.Push(Array3);
    cout<<"After Pushing these arrays into a stack and  Finally print the stack"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    while(!Stck.IsEmpty())
    {
        int Size= Stck.Top().getSize();
        for(int i=0;i<Size;i++){
            int tempValue= Stck.Top().getValue(i);
            cout<<tempValue<<" ";
        }
        cout<<endl;
        Stck.Pop();
    }
    Array1.deallocate();
    Array2.deallocate();
    Array3.deallocate();


    return 0;
}
