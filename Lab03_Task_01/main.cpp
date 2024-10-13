#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    int Array_Size;
    cout<<"Enter the size of array: ";
    cin>>Array_Size;
    DynArr<char>ANIK;
    DynArr<char>ANIK1(Array_Size);
    char arr;
    cout<<"---------Enter the elements of Array----------"<<endl;
    for(int i=0;i<Array_Size;i++)
    {
        cout<<"arr["<<i<<"]: ";
        cin>>arr;
        ANIK1.setValue(i,arr);
    }
    cout<<"---------The Array----------"<<endl;
    for(int i=0;i<Array_Size;i++)
    {
        arr=ANIK1.getValue(i);
        cout<<"arr["<<i<<"]: "<<arr<<endl;
    }
    return 0;
}
