// 1. Write a program which accept number from user and if number is less than 50
// then print small , if it is greater than 50 and less than 100 then print medium, if it is
// greater than 100 then print large.
// Input : 75
// Output : Medium 


#include "header.h"
int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    PrintNumber(iNo);
    return 0;
}





