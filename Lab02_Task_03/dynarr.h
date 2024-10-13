#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED


class DynArr
{
private:
    int **Arr;
    int row;
    int column;
public:
    DynArr();
    DynArr(int row,int column);
    void setValue(int row_index,int column_index,int Array_value);
    int getValue(int row_index,int column_index);
    ~DynArr();

};
#include "dynarr.tpp"
#endif // DYNARR_H_INCLUDED



