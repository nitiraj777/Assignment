// 2. Write a program which checks whether 5th & 18th bit is On or OFF. 

//iMask=         0000 0000 0000 0010 0000 0000 0001 0000
//Hexadecimal:0x  0    0     0    2   0     0    1   0
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//static
// BOOL CheckBit(int iValue)
// {
//    int iMask=0x00020010;
//    int iResult=0;

//    if(iValue<0)
//    {
//        iValue=-iValue;
//    }

//    iResult=iValue & iMask;
//    if(iResult==iMask)
//    {
//        return TRUE;
//    }
//    else
//    {
//        return FALSE;
//    }
   

// }
// int main()
// {
//     int iNo=0;
//     BOOL bRet=FALSE;
//     printf("Enter Number:\n");
//     scanf("%d",&iNo);

//     bRet=CheckBit(iNo);
//     if(bRet==TRUE)
//     {
//         printf("5th and 18th bit is ON");
//     }
//     else
//     {
//         printf("one or more bits are oFF");
//     }
    

//     return 0;
// }
//Dynamic
BOOL CheckBit(int iValue,int iPos1,int iPos2,int iPos3)
{
    int iMask1=0x00000001;
    int iMask2=0x00000001;
    int iMask3=0x00000001;
    int iFinal=0;
    int iFinal1=0;
    int iResult=0;

    if(iValue<0)
    {
       iValue=-iValue;
    }
    
    iMask1=iMask1<<(iPos1-1);
    iMask2=iMask2<<(iPos2-1);
    iMask3=iMask3<<(iPos3-1);
    
    iFinal=iMask1 | iMask2;
    iFinal1=iFinal | iMask3;
    
    iResult=iValue & iFinal1;
    if(iResult==iFinal1)
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
    int iNo=0,iPos1=0,iPos2=0,iPos3=0;
    BOOL bRet=FALSE;
    printf("Enter Number:\n");
    scanf("%d",&iNo);

    printf("Enter 1st position:\n");
    scanf("%d",&iPos1);

    printf("Enter 2nd position:\n");
    scanf("%d",&iPos2);

    printf("Enter 3nd position:\n");
    scanf("%d",&iPos3);
    bRet=CheckBit(iNo,iPos1,iPos2,iPos3);
    if(bRet==TRUE)
    {
        printf("5th and 18th bit is ON");
    }
    else
    {
        printf("one or more bits are oFF");
    }
    

    return 0;
}