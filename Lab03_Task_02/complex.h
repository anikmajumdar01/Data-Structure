#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

template<class ANIK_TYPE>
class Complex
{
public:

    Complex();
    Complex (ANIK_TYPE r,ANIK_TYPE i);
    Complex add(Complex <ANIK_TYPE>a);
    void Print();
private:
    ANIK_TYPE Real,Imaginary;

};
#include"complex.tpp"
#endif // COMPLEX_H_INCLUDED

