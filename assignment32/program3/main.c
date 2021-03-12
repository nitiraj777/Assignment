// 3. Write a program which checks whether 7th & 15th & 21st , 28th bit
// is On or OFF. 


//                  0000 1000 0001 0000 0100 0000 0100 0000
//hexadecimal         0   8    1     0   4    0     4    0


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBits(int iValue,int iPos1,int iPos2,int iPos3,int iPos4)
{
    int iMask=0x08104040;
    int iResult=0;

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
    int iPos1=0,iPos2=0,iPos3=0,iPos4=0;
    BOOL bRet=FALSE;

    printf("Enter number:\n");
    scanf("%d",&iNo);

    printf("Enter 1st,2nd,3rd,4th position of bits:\n");
    scanf("%d %d %d %d",&iPos1,&iPos2,&iPos3,&iPos4);

    bRet=CheckBits(iNo,iPos1,iPos2,iPos3,iPos4);
    if(bRet==TRUE)
    {
        printf("Bits are ON");
    }
    else
    {
        printf("One or more bits are OFF");
    }
    return 0;
    

}