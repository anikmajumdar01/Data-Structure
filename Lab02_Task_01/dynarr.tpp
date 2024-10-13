#include"dynarr.h"
using namespace std;

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
