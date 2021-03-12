// 4. Write a program which accept temperature in Fahrenheit and convert it into
// celsius. (1 celsius = (Fahrenheit -32) * (5/9))
// Input : 10
// Output : -12.2222 (10 - 32) * (5/9)
// Input : 34
// Output : 1.11111 (34 - 32) * (5/9) 

#include "header.h"


int main()
{
    float fNo=0.0;
    double dRet=0.0;

    printf("Enter temperature in fahrenheit:");
    scanf("%f",&fNo);

    dRet=FahrenheitToCelsius(fNo);

    printf("temperature in celcius is:%f",dRet);
    
    return 0;
}






