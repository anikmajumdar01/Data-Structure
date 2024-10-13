#include"sortedType.h"
#include<iostream>
using namespace std;

SortedType::SortedType()
{
    length = 0;
    currentPos = -1;
}

void SortedType::MakeEmpty()
{
    length = 0;
}

bool SortedType::IsFull()
{
    return (length = max_items);
}

int SortedType::LengthIs()
{
    return length;
}

void SortedType::ResetList()
{
    currentPos = -1;
}

void SortedType::InsertItem(Point item)
{
        int location = 0;
        for(int i = 0 ; i < length; i++)
        {
            if(item > info[i])
            {
                location++;
            }
            else
            {
                break;
            }
        }
        for(int j = length-1 ; j>=location; j--)
        {
            info[j+1] = info[j];
        }
        info[location] = item;
        length++;


}


void SortedType::GetNextItem(Point &item)
{
    currentPos++;
    item = info[currentPos];
}


void SortedType::DeleteItem(Point item)
{
    int location = 0;
    for(int i=0; i<length; i++)
    {
        if(item == info[i])
        {
            break;
        }
        location++;
    }
    for(int i=location; i<length-1; i++)
    {
        info[i] = info[i+1];
    }
    length--;

}


void SortedType::RetrieveItem(Point& item, bool& found)
{
    for(int i=0; i<length; i++)
    {
        if(info[i] == item)
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }
    }
}

