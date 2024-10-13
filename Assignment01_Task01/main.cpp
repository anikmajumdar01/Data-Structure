#include <iostream>
#include "sortedlist.h"

using namespace std;

int main()
{
    int value;
    SortedList<int> tempList;
    cout<<"Insert Value into List"<<endl;
    cout<<"-----------------------"<<endl;
    for(int i=0;i<7;i++){
        cin>>value;
        tempList.InsertItem(value);
    }
    cout<<"List After Insertion"<<endl;
    cout<<"--------------------"<<endl;
   int item;
   for(int i=0;i<tempList.LengthIs();i++){
    tempList.GetNextItem(item);
    cout<<item<<"\t";
   }

   cout<<endl;
   int deleteitem;
   cout<<"Enter Item to Delete: ";
   cin>>deleteitem;
   cout<<"Item Delete status="<<" "<<tempList.DeleteItem(deleteitem)<<endl;

    tempList.ResetList();
   cout<<"List After Deletion"<<endl;
   cout<<"--------------------"<<endl;
   for(int i=0;i<tempList.LengthIs();i++){
    tempList.GetNextItem(item);
    cout<<item<<"\t";
   }

    return 0;
}
