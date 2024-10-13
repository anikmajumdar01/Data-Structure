#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class DynArr
{
private:
    int size;
    int* data;
public:
    DynArr();
    DynArr(int size);
    int getSize();
    void setValue (int index, int value);
    int getValue (int index);
    void deallocate();
};
#include "dynarr.tpp"
#endif // DYNARR_H_INCLUDED
