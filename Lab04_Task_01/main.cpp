#include <iostream>
#include"fraction.h"
using namespace std;

int main()
{
    int numerator1,numerator2,denominator1,denominator2;
    cout<<"Enter numerator1: ";
    cin>>numerator1;
    cout<<endl<<"Enter denominator1: ";
    cin>>denominator1;
    cout<<endl<<"Enter numerator2: ";
    cin>>numerator2;
    cout<<endl<<"Enter denominator2: ";
    cin>>denominator2;
    Fraction f1(numerator1,denominator1);
    Fraction f2(numerator2,denominator2);
    Fraction result;
    cout<<endl;
    cout<<"                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Logical Operations \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;

    if(f1<f2)
    {
        cout<<endl;
        cout<<"                             \xDB\xDB\xDB\xDB\xB2   "<<numerator1<<"/"<<denominator1<<" is less than "<<numerator2<<"/"<<denominator2<<endl;
    }
    if(f1>f2)
    {
        cout<<endl;
        cout<<"                             \xDB\xDB\xDB\xDB\xB2   "<<numerator1<<"/"<<denominator1<<" is greater than "<<numerator2<<"/"<<denominator2<<endl;
    }
    if(f1==f2)
    {
        cout<<endl;
        cout<<"                             \xDB\xDB\xDB\xDB\xB2   "<<numerator1<<"/"<<denominator1<<" is equal with "<<numerator2<<"/"<<denominator2<<endl;
    }
    if(f1!=f2)
    {
        cout<<endl;
        cout<<"                             \xDB\xDB\xDB\xDB\xB2   "<<numerator1<<"/"<<denominator1<<" is not equal with "<<numerator2<<"/"<<denominator2<<endl;
    }
    if(f1>=f2)
    {
        cout<<endl;
        cout<<"                             \xDB\xDB\xDB\xDB\xB2   "<<numerator1<<"/"<<denominator1<<" is greater than or equal with "<<numerator2<<"/"<<denominator2<<endl;
    }
    if(f1<=f2)
    {
        cout<<endl;
        cout<<"                             \xDB\xDB\xDB\xDB\xB2   "<<numerator1<<"/"<<denominator1<<" is less than or equal with "<<numerator2<<"/"<<denominator2<<endl;
    }
    cout<<endl;
    cout<<"                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Arithmetic Operations \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;

    cout<<endl<<endl<<"                             \xDB\xDB\xDB\xDB\xB2 1. Summation :" ;
    result=f1+f2;
    result.print();
    cout<<endl;
    cout<<endl<<endl<<"                             \xDB\xDB\xDB\xDB\xB2 2. Subtraction :" ;
    result=f1-f2;
    result.print();
    cout<<endl;
    cout<<endl<<endl<<"                             \xDB\xDB\xDB\xDB\xB2 3. Division :" ;
    result=f1/f2;
    result.print();
    return 0;
}
