// 3. Write a program which accept one number from user and check whether
// 9th or 12th bit is on or off.
// Input : 257
// Output : TRUE 

//      0000 0000 0000 0000 0000 0001 0000 0000     9th
//      0000 0000 0000 0000 0000 1000 0000 0000    12th
//       0    0    0    0    0     9   0    0
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iValue)
{
    int iMask1=0x00000100;
    int iMask2=0x00000800;
    int iResult=0,iResult2=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }
    iResult=iValue & iMask1;
    iResult2=iValue & iMask2;
    if((iResult==iMask1) || (iResult==iMask2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
    
}
int main()
{
    int iNo=0,iPos=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&iNo);

    bRet=CheckBit(iNo);
    if(bRet==TRUE)
    {
        printf("one or more bits are ON");
    }
    else
    {
        printf("one or more bits are OFF");
    }
    return 0;
   
}