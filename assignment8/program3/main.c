// 3.Write a program to find factorial of given number.
// Input : 5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : -5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : 4
// Output : 24 (4 * 3 * 2 * 1) 

#include "header.h"

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iRet=Factorial(iNo);
    printf("%d",iRet);
    return 0;
}



