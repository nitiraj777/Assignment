// 4. Write a program which accept one number , two positions from user and
// check whether bit at first or bit at second position is ON or OFF.
// Input : 10 3 7
// Output : TRUE 


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iValue,int iPos1,int iPos2)
{
    int iMask1=0x00000001;
    int iMask2=0x00000001;
    int iResult1=0,iResult2=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }
    iMask1=iMask1<<(iPos1-1);
    iMask2=iMask2<<(iPos2-1);

    iResult1=iValue & iMask2;
    iResult2=iValue & iMask1;

    if((iResult1==iMask2)||(iResult2==iMask1))
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
    int iNo=0,iPos1=0,iPos2=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&iNo);

    
    printf("Enter 1st position:");
    scanf("%d",&iPos1);

    printf("Enter 2nd position:");
    scanf("%d",&iPos2);

    bRet=CheckBit(iNo,iPos1,iPos2);
    if(bRet==TRUE)
    {
        printf("One or more bits are ON");
    }
    else
    {
        printf("bits are off");
    }
    return 0;
   
}