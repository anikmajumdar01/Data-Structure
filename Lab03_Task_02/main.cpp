#include <iostream>
#include"complex.h"
using namespace std;

int main()
{
    float real_1,imaginary_1,real_2,imaginary_2;
    cout<<"Enter real_1: ";
    cin>>real_1;
    cout<<endl<<"Enter imaginary_1: ";
    cin>>imaginary_1;
    cout<<endl<<"Enter real_2: ";
    cin>>real_2;
    cout<<endl<<"Enter imaginary_2: ";
    cin>>imaginary_2;
    Complex<float>ANIK1(real_1,imaginary_1);
    Complex<float>ANIK2(real_2,imaginary_2);
    Complex<float>ANIK;
    ANIK=ANIK1.add(ANIK2);
    ANIK.Print();
    return 0;




}
