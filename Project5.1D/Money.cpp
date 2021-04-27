//Money.ccp
#include "Money.h"

Money::Money()
    : Triad(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
{}
Money::Money(int k500 = 0, int k200 = 0, int k100 = 0, int k50 = 0, int k20 = 0, int k10 = 0, int k5 = 0, int k2 = 0, int k1 = 0, double m50 = 0, double m25 = 0)
    : Triad(k500, k200, k100, k50, k20, k10, k5, k2, k1, m50, m25)
{}

Money::Money(const Money& a)
    : Triad(a.getk500(), a.getk200(), a.getk100(), a.getk50(), a.getk20(), a.getk10(), a.getk5(), a.getk2(), a.getk1(), a.getm50(), a.getm25())
{}
Money& Money::operator ++()
{
    this->setk500(this->getk500() + 1);
    return *this;
}
Money& Money::operator --()
{
    this->setk500(this->getk500() - 1);
    return *this;
}
Money Money::operator ++(int)
{
    Money tmp(*this);
    this->setk200(this->getk200() + 1);
    return tmp;
}
Money Money::operator --(int)
{
    Money tmp(*this);
    this->setk200(this->getk200() + 1);
    return tmp;
}
Money operator + (Money& b, Money& a)
{
    Money t(b.getk500() + a.getk500(), b.getk200() + a.getk200(), b.getk100() + a.getk100(), b.getk50() + a.getk50(), b.getk20() + a.getk20(), b.getk10() + a.getk10(), b.getk5() + a.getk5(), b.getk2() + a.getk2(), b.getk1() + a.getk1(), b.getm50() + a.getm50(), b.getm25() + a.getm25());

    return t;
}
Money operator - (Money& b, Money& a)
{
    Money t(b.getk500() - a.getk500(), b.getk200() - a.getk200(), b.getk100() - a.getk100(), b.getk50() - a.getk50(), b.getk20() - a.getk20(), b.getk10() - a.getk10(), b.getk5() - a.getk5(), b.getk2() - a.getk2(), b.getk1() - a.getk1(), b.getm50() - a.getm50(), b.getm25() - a.getm25());

    return t;
}
Money operator * (Money& b, Money& a)
{
    double N = 2.65;
    Money t((b.getk500() + a.getk500()) * N * 1., (b.getk200() + a.getk200()) * N * 1., (b.getk100() + a.getk100()) * N * 1., (b.getk50() + a.getk50()) * N * 1., (b.getk20() + a.getk20()) * N * 1., (b.getk10() + a.getk10()) * N * 1., (b.getk5() + a.getk5()) * N * 1., (b.getk2() + a.getk2()) * N * 1., (b.getk1() + a.getk1()) * N * 1., (b.getm50() + a.getm50()) * N * 1., (b.getm25() + a.getm25()) * N * 1.);

    return t;
}

