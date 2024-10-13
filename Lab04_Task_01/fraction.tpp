#include"fraction.h"
using namespace std;
Fraction::Fraction()
{
    numerator=0;
    denominator=1;
}
Fraction::Fraction(int numerator,int denominator)
{
    this->numerator=numerator;
    this->denominator=denominator;
}
void Fraction::print()
{
    cout<<numerator<<"/"<<denominator<<endl;
}
int Fraction::getNumerator()
{
    return numerator;
}
void Fraction::setNumerator(int numerator)
{
    this->numerator=numerator;
}
int Fraction::getDenominator()
{
    return denominator;
}
void Fraction::setDenominator(int denominator)
{
    this->denominator=denominator;
}
bool Fraction::operator<(Fraction f)
{
    return ((numerator<f.numerator)&&(denominator<f.denominator))||((numerator<f.numerator)&&(denominator>f.denominator))||((numerator==f.numerator)&&(denominator>f.denominator));
}
bool Fraction::operator>(Fraction f)
{
    return ((numerator>f.numerator)&&(denominator>f.denominator))||((numerator>f.numerator)&&(denominator<f.denominator))||(numerator==f.numerator)&&(denominator<f.denominator);
}
bool Fraction::operator==(Fraction f)
{
    return (numerator==f.numerator)&&(denominator==f.denominator);
}
bool Fraction::operator!=(Fraction f)
{
    return (numerator!=f.numerator)||(denominator!=f.denominator);
}
bool Fraction::operator<=(Fraction f)
{
    return ((numerator<f.numerator)&&(denominator<f.denominator))||((numerator<f.numerator)&&(denominator>f.denominator))||((numerator==f.numerator)&&(denominator>f.denominator))||((numerator==f.numerator)&&(denominator==f.denominator));
}
bool Fraction::operator>=(Fraction f)
{
    return ((numerator>f.numerator)&&(denominator>f.denominator))||((numerator>f.numerator)&&(denominator<f.denominator))||((numerator==f.numerator)&&(denominator<f.denominator))||((numerator==f.numerator)&&(denominator==f.denominator));
}
Fraction Fraction::operator+(Fraction f)
{
    Fraction result;
    result.numerator=(((denominator*f.denominator)/denominator)*numerator)+(((denominator*f.denominator)/(f.denominator))*f.numerator);
    result.denominator=(denominator*f.denominator);
    return result;
}
Fraction Fraction::operator-(Fraction f)
{
    Fraction result;
    result.numerator=(((denominator*f.denominator)/denominator)*numerator)-(((denominator*f.denominator)/(f.denominator))*f.numerator);
    result.denominator=(denominator*f.denominator);
    return result;
}
Fraction Fraction::operator/(Fraction f)
{
    Fraction result;
    result.numerator=numerator*f.denominator;
    result.denominator=denominator*f.numerator;
    return result;
}
