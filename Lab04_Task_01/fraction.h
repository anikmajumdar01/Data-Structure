#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction();
    Fraction(int numerator,int denominator);
    int getNumerator();
    void setNumerator(int numerator);
    int getDenominator();
    void setDenominator(int denominator);
    bool operator<(Fraction f);
    bool operator>(Fraction f);
    bool operator==(Fraction f);
    bool operator!=(Fraction f);
    bool operator<=(Fraction f);
    bool operator>=(Fraction f);
    Fraction operator+(Fraction f);
    Fraction operator-(Fraction f);
    Fraction operator/(Fraction f);
    void print();
};
#include"fraction.tpp"
#endif // FRACTION_H
