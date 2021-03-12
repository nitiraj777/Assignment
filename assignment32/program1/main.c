// 1.Write a program which checks whether 15th bit is On or OFF. 
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iValue)
{
    int iMask=0x00004000;
    int iResult=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }
    
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
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&iNo);

   bRet=CheckBit(iNo);
   if(bRet==TRUE)
   {
       printf("Bit is on");
   }
   else
   {
       printf("Bit is off");
   }
   
}