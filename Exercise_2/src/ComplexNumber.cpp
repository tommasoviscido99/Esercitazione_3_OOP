#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;
namespace ComplexLibrary{

ostream& operator << (ostream& os, const ComplexNumber& x)
{
    os << x.real;
    if (x.imag >= 0)
        os << "+";
    os << x.imag << "i";
    return os;
}

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b) {
    return ComplexNumber(a.real + b.real, a.imag + b.imag);
}

bool operator==(const ComplexNumber& a, const ComplexNumber& b) {
    return (a.real == b.real) && (a.imag == b.imag);
}

ComplexNumber conjugate(const ComplexNumber& x) {
    return ComplexNumber(x.real, -x.imag);
}

}
