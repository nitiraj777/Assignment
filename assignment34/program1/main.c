// 1.Write a program which accept one number and position from user and
// check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.
// Input : 10 2
// Output : TRUE  

//         0000 0000 0000 0000 0000 0000 0100 0000
//     0x   0    0    0    0    0    0    4    0
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iValue,int iPos)
{
    int iMask=0x00000001;
    int iResult=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }
    iMask=iMask<<(iPos-1);
    iResult=iValue & iMask;
    if(iResult==iMask)
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
    int iNo=0;
    int iPos=0;
    int bRet=0;

    printf("Enter number:");
    scanf("%d",&iNo);

    printf("Enter position:");
    scanf("%d",&iPos);

    bRet=CheckBit(iNo,iPos);

    if(bRet==TRUE)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("One or more bits are OFF");
    }
    return 0;
   
}