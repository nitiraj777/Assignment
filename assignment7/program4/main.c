// 4.Write a program which accept number from user and return multiplication of all
// digits.
// Input : 2395
// Output : 270
// Input : 1018
// Output : 8
// Input : 9440
// Output : 144
// Input : 92243
//Output : 864 

#include "header.h"
int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iRet=Multiplication(iNo);

    printf("%d",iRet);

    return 0;
}


