
#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
using namespace std;
template<class ANIK_TYPE>
class DynArr
{
private:
    ANIK_TYPE *data;
    int Size;
public:
    DynArr();
    DynArr(int Size);
    ~DynArr();
    void setValue(int index,char value);
    ANIK_TYPE getValue(int index);
    int getSize();

};
#include "dynarr.tpp"
#endif // DYNARR_H_INCLUDED
