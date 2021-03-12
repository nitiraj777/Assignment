// 5. Write a program which accept one number from user and on its first 4
// bits. Return modified number.
// Input : 73
// Output : 79 

//         0000 0000 0000 0000 0000 0000 0000 1111
//     0x   0    0    0    0    0    0    0    E
#include<stdio.h>


int CheckBit(int iValue)
{
    int iMask=0x0000000E;
    int iResult=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }
    
    iResult=iValue | iMask;
    return iResult;
    
}
int main()
{
    int iNo=0;
    int bRet=0;

    printf("Enter number:");
    scanf("%d",&iNo);

    bRet=CheckBit(iNo);

    printf("Modified number is :%d",bRet);
   
}