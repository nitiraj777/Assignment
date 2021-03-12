// 3.Write a program which accept number from user and return the count of digits in
// between 3 and 7.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 4521
// Output : 2
// Input : 9922
// Output : 0 

#include "header.h"

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iRet=DigitBetween(iNo);
    printf("%d",iRet);
    return 0;
}

