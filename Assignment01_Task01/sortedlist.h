#ifndef SORTEDLIST_H
#define SORTEDLIST_H

const int MAX_ITEMS = 7;
template <class ItemType>
class SortedList
{
public :
    SortedList();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    bool InsertItem(ItemType);
    bool DeleteItem(ItemType);
    bool RetrieveItem(ItemType&);
    void ResetList();
    bool GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#include"sortedlist.tpp"
#endif // SORTEDLIST_H

