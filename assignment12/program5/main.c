// 5. Write a program which returns difference between Even factorial and odd factorial
// of given number.
// Input : 5
// Output : -7 (8 - 15)
// Input : -5
// Output : -7 (8 - 15)
// Input : 10
// Output : 2895 (3840 - 945) 

#include "header.h"

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iNo);

    iRet=DifferenceEvenOdd(iNo);

    printf("Multiplication of Even Factorial of given number is:%d",iRet);
  
    return 0;
}






