
#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
const int max_items = 5;


class SortedType
{
public:
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(Point);
    void DeleteItem(Point);
    void RetrieveItem(Point&, bool&);
    void ResetList();
    void GetNextItem(Point&);

private:
    int length;
    Point info [max_items];
    int currentPos;
};
#include"sortedType.tpp"
#endif // SORTEDTYPE_H_INCLUDED
