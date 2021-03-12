
// 4.Write a program which accept number from user and return summation of all its
// non factors.
// Input : 12
// Output : 50
// Input : 10
// Output : 37 
#include "header.h"
//#include<stdio.h>
//int DisplayNonFactor(int);
int main()
{
    int iNo1=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iNo1);


    iRet=DisplayNonFactor(iNo1);

    printf("%d",iRet);

    return 0;
}
// int DisplayNonFactor(int iNo2)
// {
//     int iCnt=0;
//     int iSum=0;
//     for(iCnt=1;iCnt<iNo2;iCnt++)
//     {
//         if((iNo2 % iCnt) != 0)
//         {
//             iSum=iSum + iCnt;
//             printf("%d ",iCnt);
//         }
        
//     }
//     return iSum;
// }

