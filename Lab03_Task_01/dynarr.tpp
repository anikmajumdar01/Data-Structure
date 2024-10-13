#include "dynarr.h"

template<class ANIK_TYPE>
DynArr<ANIK_TYPE>::DynArr()
{
    data=NULL;
    Size=0;
}

template<class ANIK_TYPE>
DynArr<ANIK_TYPE>::DynArr(int Size)
{
    data=new ANIK_TYPE[Size];
    this->Size=Size;

}

template<class ANIK_TYPE>
DynArr<ANIK_TYPE>::~DynArr()
{
    delete []data;
}

template<class ANIK_TYPE>
void DynArr<ANIK_TYPE>::setValue(int index,char value)
{
    data[index]=value;
}

template<class ANIK_TYPE>
ANIK_TYPE DynArr<ANIK_TYPE>::getValue(int index)
{
    return data[index];
}

template<class ANIK_TYPE>
int DynArr<ANIK_TYPE>::getSize()
{
    return Size;
}
