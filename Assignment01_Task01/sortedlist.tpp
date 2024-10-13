#include "sortedlist.h"
#include <iostream>
using namespace std;
template <class ItemType>
SortedList<ItemType>::SortedList()
{
    length = 0;
    currentPos = - 1;
}
template <class ItemType>
void SortedList<ItemType>::MakeEmpty()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
bool SortedList<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType>
int SortedList<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
void SortedList<ItemType>::ResetList()
{
    currentPos = - 1;
}
template <class ItemType>
bool SortedList<ItemType>::GetNextItem(ItemType& item)
{
    if(currentPos<length-1)
    {
        currentPos++;
        item = info [currentPos];
        return true;
    }
    return false;
}

template <class ItemType>
bool SortedList<ItemType>::InsertItem(ItemType item)
{
    if(IsFull())
        return false;

    int location = -1;
    int  first = 0, last = length - 1;
    int midPoint=first+(last-first)/2;
    while(first<=last)
    {
        if(midPoint<0 || midPoint>length-1) break;

        if(item < info[midPoint])
        {
            if(midPoint-1 >= 0)
            {
                if(info[midPoint-1]<item)
                {
                    location= midPoint;
                    break;
                }
            }
            last = midPoint - 1;
        }
        else if(item > info[midPoint])
        {
            if(midPoint+1 < length)
            {
                if(info[midPoint+1]>item)
                {
                    location = midPoint+1;
                    break;
                }
            }
            first = midPoint + 1;
        }
        midPoint = first+(last - first)/2;
    }
    if(location == -1)
    {
        if(midPoint<=0)
            location = 0;
        else if (midPoint>=length)
            location = length;
    }
    for (int index = length; index > location; index--)
        info[index] = info[index - 1];
    info[location] = item;
    length++;
    return true;
}
template <class ItemType>
bool SortedList<ItemType>::DeleteItem(ItemType item)
{
    int location=0,midPoint, first = 0, last = length - 1;
    bool deleted=false;

    while ((first <= last) )
    {
        midPoint = (first + last) / 2;
        if(item < info[midPoint])
        {
            last = midPoint - 1;
        }
        else if(item > info[midPoint])
        {
            first = midPoint + 1;
        }
        else if(item==info[midPoint])
        {
            location=midPoint;
            deleted=true;
            break;
        }
    }

    if(deleted==false) return deleted;

    for (int index = location + 1; index < length; index++)
        info[index - 1] = info[index];
    length--;
    return deleted;
}
template <class ItemType>
bool SortedList<ItemType>::RetrieveItem(ItemType& item)
{
    int midPoint, first = 0, last = length - 1;

    while ((first <= last) )
    {
        midPoint = (first + last) / 2;
        if(item < info[midPoint])
        {
            last = midPoint - 1;
        }
        else if(item > info[midPoint])
        {
            first = midPoint + 1;
        }
        else
        {
            item = info[midPoint];
            return true;
        }
    }
    return false;
}

