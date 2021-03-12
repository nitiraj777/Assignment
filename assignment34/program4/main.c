// 4. Write a program which accept one number and position from user and
// toggle that bit. Return modified number.
// Input : 10 3
// Output : 14


#include<stdio.h>


int CheckBit(int iValue,int iPos)
{
    int iMask=0x00000001;
    int iResult=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }
    iMask=iMask<<(iPos-1);
    
    iResult=iValue ^ iMask;
    return iResult;
    
}
int main()
{
    int iNo=0,iPos=0;
    int bRet=0;

    printf("Enter number:");
    scanf("%d",&iNo);

    
    printf("Enter position:");
    scanf("%d",&iPos);
    bRet=CheckBit(iNo,iPos);

    printf("Modified number is :%d",bRet);
   
}