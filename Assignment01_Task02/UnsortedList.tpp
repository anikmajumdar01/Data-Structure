#include "UnsortedList.h"

template <class ItemType>
UnsortedList<ItemType>::UnsortedList(){
        length = 0;
        currentPos = -1;
}

template <class ItemType>
void UnsortedList<ItemType>::MakeEmpty()
{
    length = 0;
}

template<class ItemType>
int UnsortedList<ItemType>::LengthIs()
{
    return length;
}

template<class ItemType>
bool UnsortedList<ItemType>::IsFull()
{
    return (length == max_items);
}

template<class ItemType>
void UnsortedList<ItemType>::ResetList()
{
    currentPos = -1;
}

template<class ItemType>
void UnsortedList<ItemType>::InsertItem(ItemType item)
{
    info[length] = item;
    length ++ ;
}

template<class ItemType>
void UnsortedList<ItemType>::DeleteItem(ItemType item)
{
    int location = 0 ;
    while (item != info[location]){
        location++;
    }
    info[location] = info[length - 1];
    length-- ;
}

template<class ItemType>
void UnsortedList<ItemType>:: GetNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}

template<class ItemType>
void UnsortedList<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    int a = length;

    for(int i = 0; i <a; i++)
    {
        if(item == info[i]){
            found = true;
            item = info[i];
            break;
        }
        else{
            found = false;
        }

    }

}

