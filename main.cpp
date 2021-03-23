#include <iostream>
#include "Fraction.h"


using namespace std;

int main() {
    Fraction a;
    Fraction N, M, A;
    N.Read();
    cout << "\nNumber 1: ";
    N.Display();
    M.Read();
    cout << "\nNumber 2: ";
    M.Display();
    A.Add(N,M);
    A.Mul(N,M);
    cin >> a;
    cout << a;
    cout << "Increment-prefix form is " << endl;
    ++a; cout << a;
    cout << "Decrement-prefix form is" << endl;
    --a; cout << a;
    cout << "Increment-postfix form is " << endl;
    a++; cout << a;
    cout << "Decrement-postfix form is" << endl;
    a--; cout << a;
    return 0;
}