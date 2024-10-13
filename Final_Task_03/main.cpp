#include <iostream>
#include "QueueType.h"
#include "BinarySearchTree.h"
#include "sortedtype.h"
using namespace std;

int main()
{
    SortedType <int>obj1;
    obj1.InsertItem(5);
    obj1.InsertItem(1);
    obj1.InsertItem(2);
    obj1.InsertItem(7);
    obj1.InsertItem(3);
    int item_found=7;
    cout<<"Length: "<<obj1.LengthIs()<<endl;
    cout<<"RetriveItem-7: "<<obj1.RetrieveItem(item_found)<<endl;
    cout<<"Delete-5: "<<obj1.DeleteItem(5)<<endl;
    cout<<"Length after deleting 5: "<<obj1.LengthIs()<<endl;
    int item;
    for(int i=0;i<obj1.LengthIs();i++)
    {
        obj1.GetNextItem(item,PRE_ORDER);
        cout<<item<<"  ";
    }
    return 0;
}
