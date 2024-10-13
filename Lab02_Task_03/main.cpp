#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    int row,column;
    cout<<"Enter the size of row: "<<endl;
    cin>>row;
    cout<<"Enter the size of column: "<<endl;
    cin>>column;
    DynArr Anik;
    DynArr Anik1(row,column);
    int array_value=0;
    cout<<"------Enter the elements of Array------"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {

            cout<<"arr["<<i<<"]["<<j<<"] : ";
            cin>>array_value;
            Anik1.setValue(i,j,array_value);
        }
    }

    cout<<endl;
    cout<<"--------2D Array Elements---------"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
          cout<<"\t";
          cout<<Anik1.getValue(i,j)<<"\t";
        }
        cout<<endl<<endl;
    }
    return 0;
}
