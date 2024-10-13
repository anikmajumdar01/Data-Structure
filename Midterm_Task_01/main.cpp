#include <iostream>
#include"Point.h"
#include"sortedType.h"
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<"Enter y1: ";
    cin>>y1;
    cout<<"Enter x2: ";
    cin>>x2;
    cout<<"Enter y2: ";
    cin>>y2;
    cout<<"Enter x3: ";
    cin>>x3;
    cout<<"Enter y3: ";
    cin>>y3;
    Point p1(x1,y1);
    Point p2(x2,y2);
    Point p3(x3,y3);

    cout<<endl<<endl;
    cout<<"********** After Sorting **********"<<endl;
    cout<<"-----------------------------------"<<endl;
    SortedType spoint;

    spoint.InsertItem(p1);
    spoint.InsertItem(p2);
    spoint.InsertItem(p3);

    Point temp;
    for(int i=0;i<spoint.LengthIs();i++)
    {
        spoint.GetNextItem(temp);
        temp.Print_Co_Ordinate();
    }


    return 0;
}
