#include <iostream>
#include "BinarySearchTree.h"
#include "QueueType.h"
using namespace std;

int main()
{
    int leaf,height;
    TreeType<int> tr;
    tr.InsertItem(15);
    tr.InsertItem(12);
    tr.InsertItem(18);
    tr.InsertItem(10);
    tr.InsertItem(13);
    tr.InsertItem(16);
    tr.InsertItem(20);
    tr.InsertItem(7);
    tr.InsertItem(11);
    tr.InsertItem(17);
    leaf=tr.number_Of_Leaf();
    height=tr.height();
    cout<<"Number of leaf node is: "<<leaf<<endl;
    cout<<"The height of the tree is: "<<height<<endl;
    return 0;
}
