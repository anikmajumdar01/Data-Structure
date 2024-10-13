#include "sortedtype.h"
#include <iostream>
using namespace std;
TreeType <int> obj;
template <class ItemType>
SortedType<ItemType>::SortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}
template <class ItemType>
int SortedType<ItemType>::LengthIs()
{
    return obj.LengthIs();
}
template<class ItemType>
bool SortedType<ItemType>::IsFull()
{
    if(obj.IsFull()==false)
        return false;
    else
        return true;
}
template <class ItemType>
bool SortedType<ItemType>::InsertItem(ItemType item)
{

    if(obj.IsFull())
    {
        return false;
    }
    else
    {
        obj.InsertItem(item);
        return true;
    }

}
template <class ItemType>
bool SortedType<ItemType>::DeleteItem(ItemType item)
{
    if(!obj.IsEmpty())
    {
        obj.DeleteItem(item);
        return true;
    }
    else
        return false;
}
template <class ItemType>
bool SortedType<ItemType>::RetrieveItem(ItemType& item)
{
    bool found;
    obj.RetrieveItem(item,found);
    if(found== true)
        return true;
    else
        return false;

}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    obj.MakeEmpty();
}
template <class ItemType>
SortedType<ItemType>::~SortedType()
{
    MakeEmpty();
}
template <class ItemType>
void SortedType<ItemType>::ResetList(OrderType order)
{
    obj.ResetTree(order);
}
template <class ItemType>
bool SortedType<ItemType>::GetNextItem(ItemType& item, OrderType order)
{
    bool found;
    obj.GetNextItem(item, order, found);
    if (found== true)
        return true;
    else
        return false;

}
