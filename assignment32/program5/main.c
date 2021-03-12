// 5. Write a program which checks whether first and last bit is On or
// OFF. First bit means bit number 1 and last bit means bit number 32. 

//              1000 0000 0000 0000 0000 0000 0000 0001
//hexadecimal   8     0     0   0    0    0    0     1


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0

BOOL CheckBits(int iValue,int iPos1,int iPos2)
{
    UNIT iMask=0x80000001;
    UNIT iResult=0;

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
    int iPos1=0,iPos2=0;

    printf("Enter number:\n");
    scanf("%d",&iNo);

    printf("Enter 3 position:\n");
    scanf("%d %d",&iPos1,&iPos2);

    bRet=CheckBits(iNo,iPos1,iPos2);

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