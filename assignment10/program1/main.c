// 1.Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14. (Area = PI * Radius * Radius)
// Input : 5.3
// Output : 88.2026
// Input : 10.4
// Output : 339.6224 


#include "header.h"


int main()
{
    float fNo=0.0;
    double dRet=0;

    printf("Enter radius of circle:");
    scanf("%f",&fNo);

    dRet=CalculateArea(fNo);

    printf("Area of circle is:%0.4f",dRet);
    return 0;
}









