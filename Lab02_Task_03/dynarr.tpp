#include "dynarr.h"

DynArr::DynArr()
{
    Arr=new int*[NULL];
    row=0;
    column=0;
}
DynArr::DynArr(int row,int column)
{
    Arr=new int*[row];
    for(int i=0;i<row;i++)
    {
        Arr[i]=new int[column];
    }
    this->row=row;
    this->column=column;
}
int DynArr::getValue(int row_index,int column_index)
{
    return Arr[row_index][column_index];
}
void DynArr::setValue(int row_index,int column_index,int Array_value)
{
    Arr[row_index][column_index]=Array_value;
}


DynArr::~DynArr()
{
    for(int i=0;i<row;i++)
    {
        delete []Arr[i];
    }
    delete Arr;
}
