#pragma once
#include <iostream>
#include <string>

using namespace std;

class Fraction {
public:
    Fraction();
    Fraction(long,unsigned short);
    Fraction(const Fraction&);
    ~Fraction();
    void Init(long f,unsigned short s);
    void Read();
    void Display();
    void Add(Fraction a,Fraction b);
    void Mul(Fraction a,Fraction b);
    void SetFirst(long);
    void SetSecond(unsigned short );
    double GetFirst() const;
    double GetSecond() const;

    Fraction& operator = (const Fraction&);
    operator string() const;

    friend istream& operator >> (istream&, Fraction&);
    friend ostream& operator << (ostream&, const Fraction&);

    Fraction& operator ++();
    Fraction& operator --();

    Fraction operator ++(int);
    Fraction operator --(int);
    double operator()(double);
    long first;
    unsigned short second;
};