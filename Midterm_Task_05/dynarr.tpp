#include "dynarr.h"
#include<iostream>
using namespace std;
DynArr::DynArr()
{
    this->size = 0;
    data = NULL;
}
DynArr::DynArr(int size)
{
    this->size = size;
    data = new int[size];
}

int DynArr::getValue(int index)
{
    return data[index];
}
void DynArr::setValue (int index, int value)
{
    data[index] = value;
}
int DynArr::getSize()
{
    return size;
}
void DynArr::deallocate()
{
    delete []data;
}

