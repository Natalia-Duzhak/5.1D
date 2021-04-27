//Money.h
#pragma once
#include "Triad.h"
class Money :public Triad

{
public:
    Money();
    Money(int, int, int, int, int, int, int, int, int, double, double);
    Money(const Money&);



    Money& operator ++();
    Money& operator --();
    Money operator ++(int);
    Money operator --(int);

    friend   Money operator + (Money&, Money&);
    friend   Money operator - (Money&, Money&);
    friend   Money operator * (Money&, Money&);


};

