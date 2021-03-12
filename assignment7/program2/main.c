// 2.Write a program which accept number from user and return the count of odd
// digits.
// Input : 2395
// Output : 3 
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// Input : 8462
// Output : 0 

#include "header.h"
int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iNo);
    
    iRet=CountOdd(iNo);

    printf("%d",iRet);

   
    return 0;

}



