
// 5.Write a program which accept number from user and return difference between
// summation of all its factors and non factors. 
// Input : 12
// Output : -34 (16 - 50)
// Input : 10
// Output : -29 (8 - 37) 

#include "header.h"
//#include<stdio.h>
//int DisplayNonFactor(int);
int main()
{
    int iNo1=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iNo1);


    iRet=FactorDifference(iNo1);

    printf("%d",iRet);

    return 0;
}


