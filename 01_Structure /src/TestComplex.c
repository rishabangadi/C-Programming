#include "inc.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void TestSumComplex(void)
{   num1.real=4;num1.imaginary=8;
    num2.real=6;num2.imaginary=7;
    float result[2]={10,15};
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(result,SumComplex(num1,num2),2);
    
}
void TestDifference(void)
{   num1.real=-4;num1.imaginary=22;
    num2.real=15;num2.imaginary=-12;
    float result[2]={-19,34};
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(result,Difference(num1,num2),2);
    
}

void TestProduct(void)
{   num1.real=3;num1.imaginary=2;
    num2.real=1;num2.imaginary=7;
    float result[2]={-11,23};
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(result,multiply(num1,num2),2);
    
    num1.real=1;num1.imaginary=1;
    num2.real=1;num2.imaginary=1;
    result[0]=0;result[1]=2;
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(result,multiply(num1,num2),2);
    
}

void TestDivision(void)
{   num1.real=3;num1.imaginary=4;
    num2.real=8;num2.imaginary=-2;
    float result[2]={4.0/17,19.0/34};
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(result,divide(num1,num2),2);
    
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(TestSumComplex);
    RUN_TEST(TestDifference);
    RUN_TEST(TestProduct);
    RUN_TEST(TestDivision);
    return UNITY_END();
}
