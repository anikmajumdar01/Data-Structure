#include <iostream>

using namespace std;

int main()
{
    int *Array=NULL;
    cout<<".....Before Allocating....."<<endl;
    cout<<Array<<endl;
    int Size;
    cout<<"Enter the size of Array:";
    cin>>Size;
    Array=new int[Size];//1D array allocation
    cout<<".....After Allocating....."<<endl;
    cout<<Array<<endl;
    cout<<&Array[0]<<endl;
    if(Array!=NULL)
    {
        cout<<"....Pointer is allocated...."<<endl;
        cout<<"Enter the elements of the Array: "<<endl;
        for(int i=0;i<Size;i++)
        {
            cout<<"Array["<<i<<"]: ";
            cin>>Array[i];
        }
        cout<<"Value of the Array are: "<<endl;
        for(int i=0;i<Size;i++)
        {
            cout<<"Array["<<i<<"]: "<<Array[i]<<endl;
        }
    }
    else if(Array==NULL)
    {
        cout<<"Sorry!!!...Pointer is not allocated......!!!"<<endl;
    }
    delete []Array;//1D array deallocation
    cout<<".......After de-allocating......."<<endl;
    cout<<Array<<endl;
    cout<<"Verifying whether the memory exits after deallocation (It it's print garbage then it's deallocated)"<<endl;
    for(int i=0;i<Size;i++)
    {
        cout<<"Array["<<i<<"]: "<<Array[i]<<endl;
    }

    return 0;
}
