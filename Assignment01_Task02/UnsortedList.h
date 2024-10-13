#ifndef UNSORTEDLIST_H_INCLUDED
#define UNSORTEDLIST_H_INCLUDED
const int max_items = 5;

template <class ItemType>
class UnsortedList
{
    public:
        UnsortedList();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void RetrieveItem(ItemType&, bool&);
        void ResetList();
        void GetNextItem(ItemType&);

    private:
        int length;
        ItemType info[max_items];
        int currentPos;
};
#include "UnsortedList.tpp"
#endif //UNSORTEDLIST_H_INCLUDED
