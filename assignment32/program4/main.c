// 4. Write a program which checks whether 7th & 8th & 9th bit is On or
// OFF. 

//                  0000 0000 0000 0000 0000 0001 1100 0000
//hexadecimal         0   0    0    0     0   1    c   0


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBits(int iValue,int iPos1,int iPos2,int iPos3)
{
    int iMask=0x000001C0;
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
    BOOL bRet=0;
    int iPos1=0,iPos2=0,iPos3=0;

    printf("Enter number:\n");
    scanf("%d",&iNo);

    printf("Enter 3 position:\n");
    scanf("%d %d %d",&iPos1,&iPos2,&iPos3);

    bRet=CheckBits(iNo,iPos1,iPos2,iPos3);

    if(bRet==TRUE)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("one or more bits are OFF");
    }

    return 0;
        
}