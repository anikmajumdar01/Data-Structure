#include"complex.h"
using namespace std;
template<class ANIK_TYPE>
Complex<ANIK_TYPE>::Complex()
{
    Real=0;
    Imaginary=0;
}

template<class ANIK_TYPE>
Complex<ANIK_TYPE>::Complex(ANIK_TYPE r,ANIK_TYPE i)
{
    Real=r;
    Imaginary=i;
}

template<class ANIK_TYPE>
Complex<ANIK_TYPE> Complex <ANIK_TYPE>::add(Complex<ANIK_TYPE>a)
{
    Complex t;
    t.Real=Real+a.Real;
    t.Imaginary=Imaginary+a.Imaginary;
    return t;
}

template<class ANIK_TYPE>
void Complex<ANIK_TYPE>::Print()
{
    if(Real==0)
    {
        cout<<Imaginary<<"i"<<endl;
    }
    else
    {
        if(Imaginary<0)
        {
            cout<<"-------Addition of Complex Number--------"<<endl;
            cout<<Real<<Imaginary<<"i"<<endl;
        }
        else if(Imaginary==0)
        {
            cout<<"-------Addition of Complex Number--------"<<endl;
            cout<<Real<<endl;
        }
        else
        {
            cout<<"-------Addition of Complex Number--------"<<endl;
            cout<<Real<<"+"<<Imaginary<<"i"<<endl;
        }
    }

}
