#include "unsortedtype.h"
#include <iostream>
using namespace std;
template <class ItemType>

UnsortedType<ItemType>::UnsortedType()

{

    length = 0;

    listData = NULL;

    currentPos = NULL;

}


template <class ItemType>

int UnsortedType<ItemType>::LengthIs()

{

    return length;

}


template<class ItemType>

bool UnsortedType<ItemType>::IsFull()

{

    NodeType* location;

    try

    {

        location = new NodeType;

        delete location;

        return false;

    }

    catch(bad_alloc& exception)

    {

        return true;

    }

}

template <class ItemType>

bool UnsortedType<ItemType>::InsertItem(ItemType item)

{

    if(IsFull())

        return false;



    // declaring is_contained to hold true if item is contained in the listData

    bool is_contained = false;



    // creating NodeType ptr to keep track of each item in listData

    NodeType* ptr = listData;



    // use while loop check item in listData

    while (ptr != nullptr)
    {

        // if item is found then set is_contained to true

        if (ptr->info == item)
        {

            is_contained = true;

        }

        ptr = ptr->next;

    }

    // insert item if item is not contained in the listdata

    if (!is_contained)
    {

        NodeType* location;

        location = new NodeType;

        location->info = item;

        location->next = listData;

        listData = location;

        length++;

    }



    return true;

}

template <class ItemType>

bool UnsortedType<ItemType>::DeleteItem(ItemType item)

{

    NodeType* location = listData;

    NodeType* tempLocation;

    if (item == listData->info)

    {

        tempLocation = listData;

        listData = listData->next;

    }

    else

    {

        while (item!=(location->next)->info)
        {

            location = location->next;

            if(location->next == NULL)

                return false;

        }



        tempLocation = location->next;

        location->next = (location->next)->next;

    }

    delete tempLocation;

    length--;

    return true;

}


template <class ItemType>

bool UnsortedType<ItemType>::RetrieveItem(ItemType& item)

{

    NodeType* location = listData;

    //bool moreToSearch = (location != NULL);

    bool found = false;

    while ((location != NULL) && (found == false))

        //while(moreToSearch && !found)

    {

        if (item == location->info)
        {

            found = true;

            item = location->info;

        }

        else

        {

            location = location->next;

            //moreToSearch = (location != NULL);

        }

    }

    return found;

}

template <class ItemType>

void UnsortedType<ItemType>::MakeEmpty()

{

    NodeType* tempPtr;

    while (listData != NULL)

    {

        tempPtr = listData;

        listData = listData->next;

        delete tempPtr;

    }

    length = 0;

    currentPos = NULL;

}

template <class ItemType>

UnsortedType<ItemType>::~UnsortedType()

{

    MakeEmpty();

}

template <class ItemType>

void UnsortedType<ItemType>::ResetList()

{

    currentPos = NULL;

}


template <class ItemType>

bool UnsortedType<ItemType>::GetNextItem(ItemType& item)

{

    if (currentPos == NULL)

        currentPos = listData;

    else

        currentPos = currentPos->next;

    if(currentPos == NULL)

        return false;

    item = currentPos->info;

    return true;

}
