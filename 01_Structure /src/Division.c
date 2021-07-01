#include "inc.h"

#define a num1.real
#define b num1.imaginary
#define c num2.real
#define d num2.imaginary


float* divide(complex_t num1,complex_t num2)
{
    //res=num1-num2
    complex_t result;
    
    result.real=(a*c+b*d)/(c*c+d*d);
    result.imaginary=(b*c-a*d)/(c*c+d*d);    
    
    //for testing purpose, declare a float array
    r[0]=result.real;
    r[1]=result.imaginary;
    return r;
}
