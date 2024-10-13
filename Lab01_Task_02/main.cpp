#include <iostream>

using namespace std;

int main()
{
    int row,column;
    cout<<"Enter the size of row: ";
    cin>>row;
    cout<<endl<<"Enter the size of column: ";
    cin>>column;
    int **Array=new int*[row];
    for(int i=0;i<row;i++)
    {
        Array[i]=new int[column];
    }
    cout<<endl<<"Enter the elements of the array: "<<endl<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Array["<<i<<"]"<<"["<<j<<"]: ";
            cin>>Array[i][j];
        }
    }
    cout<<endl<<endl;
    cout<<".............................................The Matrix................................................"<<endl<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"\t\t";
            cout<<Array[i][j]<<" ";
        }
        cout<<endl<<endl;
    }
    for(int i=0;i<row;i++)
    {
        delete []Array[i];
    }
    delete []Array;

    return 0;
}
