//Triad.cpp
#include "Triad.h"

#include <iostream>
#include <string>
#include <sstream> 

using namespace std;


void Triad::setk500(int value)
{
    if (value > 0)
        k500 = value;
    else
        k500 = 0;
}
void Triad::setk200(int value)
{
    if (value > 0)
        k200 = value;
    else
        k200 = 0;
}
void Triad::setk100(int value)
{
    if (value > 0)
        k100 = value;
    else
        k100 = 0;
}
void Triad::setk50(int value)
{
    if (value > 0)
        k50 = value;
    else
        k50 = 0;
}
void Triad::setk20(int value)
{
    if (value > 0)
        k20 = value;
    else
        k20 = 0;
}
void Triad::setk10(int value)
{
    if (value > 0)
        k10 = value;
    else
        k10 = 0;
}
void Triad::setk5(int value)
{
    if (value > 0)
        k5 = value;
    else
        k5 = 0;
}
void Triad::setk2(int value)
{
    if (value > 0)
        k2 = value;
    else
        k2 = 0;
}
void Triad::setk1(int value)
{
    if (value > 0)
        k1 = value;
    else
        k1 = 0;
}
void Triad::setm50(double value)
{
    if (value > 0)
        m50 = value;
    else
        m50 = 0;
}
void Triad::setm25(double value)
{
    if (value > 0)
        m25 = value;
    else
        m25 = 0;
}
Triad::Triad()
    : k500(0), k200(0), k100(0), k50(0), k20(0), k10(0), k5(0), k2(0), k1(0), m50(0), m25(0)
{}
Triad::Triad(int k500, int k200, int k100, int k50, int k20, int k10, int k5, int k2, int k1, double m50, double m25) throw(invalid_argument, bad_exception, MyException, const char*)
{
    if (k500 < 0)
        throw invalid_argument("Invalid_argument");
    else 
        if (k200 < 0)
        throw bad_exception();
    else
        if (k100 < 0)
        throw MyException("MyException");
    else 
        if (k50 < 0)
        throw "Exception";

    setk500(k500);
    setk200(k200);
    setk100(k100);
    setk50(k50);
    setk20(k20);
    setk10(k10);
    setk5(k5);
    setk2(k2);
    setk1(k1);
    setm50(m50);
    setm25(m25);
}
Triad::Triad(const Triad& t)
{
    *this = t;
}

Triad& Triad::operator = (const Triad& l)
{
    k500 = l.k500;
    k200 = l.k200;
    k100 = l.k100;
    k50 = l.k50;
    k20 = l.k20;
    k10 = l.k10;
    k5 = l.k5;
    k2 = l.k2;
    k1 = l.k1;
    m50 = l.m50;
    m25 = l.m25;

    return *this;

}
bool operator == (const Triad& A, const Triad& B)
{
    return (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() == B.getk2() && A.getk1() == B.getk1() && A.getm50() == B.getm50() && A.getm25() == B.getm25());
}

bool operator != (const Triad& A, const Triad& B)
{
    return !(A == B);
}

bool operator > (const Triad& A, const Triad& B)
{
    return ((A.getk500() > B.getk500()) ||
        (A.getk500() == B.getk500() && A.getk200() > B.getk200()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() > B.getk100()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() > B.getk50()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() > B.getk20()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() > B.getk10()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() > B.getk5()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() > B.getk2()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() == B.getk2() && A.getk1() > B.getk1()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() == B.getk2() && A.getk1() == B.getk1() && A.getm50() > B.getm50()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() == B.getk2() && A.getk1() == B.getk1() && A.getm50() == B.getm50() && A.getm25() > B.getm25()));
}

bool operator < (const Triad& A, const Triad& B)
{
    return ((A.getk500() < B.getk500()) ||
        (A.getk500() == B.getk500() && A.getk200() < B.getk200()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() < B.getk100()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() < B.getk50()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() < B.getk20()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() < B.getk10()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() < B.getk5()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() < B.getk2()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() == B.getk2() && A.getk1() < B.getk1()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() == B.getk2() && A.getk1() == B.getk1() && A.getm50() < B.getm50()) ||
        (A.getk500() == B.getk500() && A.getk200() == B.getk200() && A.getk100() == B.getk100() && A.getk50() == B.getk50() && A.getk20() == B.getk20() && A.getk10() == B.getk10() && A.getk5() == B.getk5() && A.getk2() == B.getk2() && A.getk1() == B.getk1() && A.getm50() == B.getm50() && A.getm25() < B.getm25()));

}

bool operator >= (const Triad& A, const Triad& B)
{
    return !(A < B);
}

bool operator <= (const Triad& A, const Triad& B)
{
    return !(A > B);
}
ostream& operator <<(ostream& out, const Triad& a)
{
    out << string(a) << endl;
    return out;
}
istream& operator >>(istream& in, Triad& a)
{
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 500 : ";
    in >> a.k500;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 200 : ";
    in >> a.k200;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 100 : ";
    in >> a.k100;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 50 : ";
    in >> a.k50;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 20 : ";
    in >> a.k20;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 10 : ";
    in >> a.k10;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 5 : ";
    in >> a.k5;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 2 : ";
    in >> a.k2;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 1 : ";
    in >> a.k1;
    cout << endl;

    cout << "¬вед≥ть к≥льк≥сть коп≥йок ном≥налом 50 : ";
    in >> a.m50;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть коп≥йок ном≥налом 25 : ";
    in >> a.m25;

    return in;
}

Triad::operator string() const
{
    double s = k500 * 500 + k200 * 200 + k100 * 100 + k50 * 50 + k20 * 20 + k10 * 10 + k5 * 5 + k2 * 2 + k1 * 1 + m50 * 0.5 + m25 * 0.25;
    stringstream sstr;
    sstr << s << "грн.";
    return sstr.str();
}
