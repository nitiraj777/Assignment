// 3.Write a program which accept number from user and count frequency of 2 in it.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 9000
// Output : 0
// Input : 922432
// Output : 3 

#include "header.h"
int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iRet=DisplayFrequency(iNo);

    printf("%d",iRet);

    return 0;
}

