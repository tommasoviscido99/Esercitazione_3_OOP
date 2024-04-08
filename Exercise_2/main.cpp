#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;
using namespace ComplexLibrary;

int main()
{
    ComplexNumber a(1, 2);
    ComplexNumber b(1, -2);
    ComplexNumber c = a + b;

    cout << "Complex number a: " << a << endl;
    cout << "Complex number b: " << b << endl;
    cout << "Sum of a and b: " << c << endl;

    cout << "Conjugate of a: " << conjugate(a) << endl;

    if (a == b) {
        cout << "a and b are equal" << endl;
    } else {
        cout << "a and b are not equal" << endl;
    }

    if (conjugate(a) == b) {
        cout << "Conjugate of a and b are equal" << endl;
    } else {
        cout << "Conjugate of a and b are not equal" << endl;
    }

    return 0;
}
