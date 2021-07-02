#include "inc.h"

float *SumComplex(complex_t num1, complex_t num2)
{
    complex_t result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    //for testing purpose, declare a float array
    r[0] = result.real;
    r[1] = result.imaginary;
    return r;
}
