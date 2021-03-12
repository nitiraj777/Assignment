// 2. Write a program which accept width & height of rectangle from user and calculate
// its area. (Area = Width * Height) 
// Input : 5.3 9.78
// Output : 51.834 

#include "header.h"

int main()
{
    float fNo1=0.0;
    float fNo2=0.0;
    double dRet=0;

    printf("Enter Width and Height of rectangle:");
    scanf("%f %f",&fNo1,&fNo2);

    dRet=RectangleArea(fNo1,fNo2);

    printf("Area of rectangle is:%0.3f",dRet);

     return 0;

}








