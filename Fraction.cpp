#include <iostream>
#include <sstream>
#include "Fraction.h"


using namespace std;

void Fraction::Init(long f,unsigned short s) {
    first=f;
    second=s;
}

void Fraction::Read() {
    cout << "Whole part: "; cin >> first;
    cout << "Fraction part: "; cin >> second;
}

void Fraction::Display(){
    cout << first << "." << second << endl;
}

Fraction::Fraction() {
    first = 0;
    second = 0;
}

Fraction::Fraction(long first = 0, unsigned short second = 0) {
    this->first = first;
    this->second = second;
}

Fraction::Fraction(const Fraction& c) {
    first = c.first;
    second = c.second;
}

Fraction::~Fraction()
{}

void Fraction::SetFirst(long first) {
    this->first = first;
}

void Fraction::SetSecond(unsigned short second) {
    this->second = second;
}

double Fraction::GetFirst() const { return first; }
double Fraction::GetSecond() const { return second; }

Fraction& Fraction::operator = (const Fraction& c) {
    first = c.first;
    second = c.second;
    return *this;
}

istream& operator >> (istream& in, Fraction& c) {
    cout << "Enter a Fraction: " << endl;
    cout << "whole part = "; in >> c.first;
    cout << "fraction part = "; in >> c.second;
    return in;
}

ostream& operator << (ostream& out, const Fraction& c) {
    out << string(c);
    return out;
}

Fraction::operator string() const {
    stringstream ss;
    ss << "Fraction: y = " << first << "," << second << endl;
    return ss.str();
}

double Fraction::operator() (double x) {
    return  first + second;
}

Fraction& Fraction::operator ++() {
    ++first;
    ++second;
    return *this;
}

Fraction& Fraction::operator --() {
    --first;
    --second;
    return *this;
}

Fraction Fraction::operator ++(int) {
    Fraction a(*this);
    first++;
    second++;
    return a;
}

Fraction Fraction::operator --(int) {
    Fraction a(*this);
    first--;
    second--;
    return a;
}
void Fraction::Add(Fraction a,Fraction b) {
    cout << "\nAddition: " << a.first+b.first << "."<< a.second+b.second << endl;
}

void Fraction::Mul(Fraction a,Fraction b) {
    cout << "Multiplication: " << a.first*b.first << "." << a.second*b.second << endl;
}
