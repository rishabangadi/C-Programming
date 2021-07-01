#include<math.h>

typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;  
complex_t num1,num2,num3;

float r[2];

float* SumComplex(complex_t num1,complex_t num2);
float* Difference(complex_t num1,complex_t num2);
float* multiply(complex_t num1,complex_t num2);
float* divide(complex_t num1,complex_t num2);

