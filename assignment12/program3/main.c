// 3.Write a program to find even factorial of given number.
// Input : 5
// Output : 8 (4 * 2)
// Input : -5
// Output : 8 (4 * 2)
// Input : 10
// Output : 3840 (10 * 8 * 6 * 4 * 2) 

#include "header.h"

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iNo);

    iRet=MultiplyEvenFactorial(iNo);

    printf("Multiplication of Even Factorial of given number is:%d",iRet);
  
    return 0;
}






