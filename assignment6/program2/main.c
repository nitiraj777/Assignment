// 2.Write a program which accept number from user and check whether it contains 0
// in it or not.
// Input : 2395
// Output : There is no Zero
// Input : 1018
// Output : It Contains Zero
// Input : 9000
// Output : It Contains Zero
// Input : 10687
// Output : It Contains Zero

#include "header.h"
int main()
{
    int iNo=0;
    BOOL iRet=FALSE;

    printf("Enter number\n");
    scanf("%d",&iNo);

    iRet=CheckZero(iNo);

    if(iRet==TRUE)
    {
        printf("it contain zero");
    }
    else
    {
        printf("there is no zero");
    }

    return 0;
    

}

