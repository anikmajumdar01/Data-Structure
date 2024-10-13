#include"dynarr.h"

DynArr::DynArr()
{
    this->size=0;
    data=NULL;
}
DynArr::DynArr(int size)
{
    this->size=size;
    data=new int[size];
}
DynArr::~DynArr()
{
    delete []data;
}
int DynArr::getValue(int index)
{
    return data[index];
}
void DynArr::setValue(int index,int value)
{
    data[index]=value;
}
int DynArr::getSize()
{
    return size;
}
void DynArr::allocate(int s)
{
    int *temp=new int[size+s];
    for(int i=0;i<size;i++)
    {
        temp[i]=data[i];
    }
    delete []data;
    data=temp;
    size=size+s;
}

