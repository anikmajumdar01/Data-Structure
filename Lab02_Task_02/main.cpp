#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{
    DynArr Anik;
    DynArr Anik1(5);
    int val;
    cout<<"Enter the five values of Array: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>val;
        Anik1.setValue(i,val);
    }
    cout<<"------------Values that are stored within array----------------"<<endl;;
    for(int i=0;i<5;i++)
    {
        cout<<Anik1.getValue(i)<<endl;
    }
    int changing_size;
    cout<<"Enter the extra size of array: ";
    cin>>changing_size;
    Anik1.allocate(changing_size);
    cout<<endl;
    cout<<"------After increasing/decreasing the array size the whole array-----"<<endl;
    for(int i=0;i<(5+changing_size);i++)
    {
        cout<<Anik1.getValue(i)<<endl;
    }



    return 0;
}
