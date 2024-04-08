#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>

using namespace std;
namespace ComplexLibrary{

struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber(double a, double b):
        real(a),
        imag(b)
    {}

    ComplexNumber() = default;

};

ostream& operator<<(ostream& os, const ComplexNumber& x);
ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b);
bool operator==(const ComplexNumber& a, const ComplexNumber& b);
ComplexNumber conjugate(const ComplexNumber& x);

}
#endif
