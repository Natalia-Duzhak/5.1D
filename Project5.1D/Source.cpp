//Source.ccp
#include <iostream>
#include <Windows.h> 
#include"Money.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double N;

    Money a, b, c;

    try
    {
       Money c(2,2,2,-2,2,2,2,2,2,2,2);     
    }

catch (invalid_argument e)
{

    cout << e.what() << endl;
}
catch (bad_exception e)
{

    cout << e.what() << endl;
}
catch (MyException& e)
{

    cout << e.what() << endl;
}
catch (const char* e)
{

    cerr << e << endl;
}

cout << "��� ����� ������� �������:" << endl;
cin >> a;
cout << a << endl << endl;
cout << "��� ����� ������� �������:" << endl;
cin >> b;
cout << b << endl << endl;

cout << "a + b = " << a + b;
cout << "a - b = " << a - b;
cout << "(a + b)*N = " << a * b;

cout << "++a" << endl; cout << ++a << endl;
cout << "--a" << endl; cout << --a << endl;
cout << "a++" << endl; cout << a++ << endl;
cout << "a--" << endl; cout << a-- << endl;

    Triad A, B;

    return 0;
}
