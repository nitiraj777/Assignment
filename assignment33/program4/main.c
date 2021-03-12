// /4. Write a program which accept one number from user and toggle 7th and
// 10th bit of that number. Return modified number.
// Input : 137
// Output : 713 

//         0000 0000 0000 0000 0000 0010 0100 0000
//     0x   0    0    0    0    0    2    4    0
#include<stdio.h>


int CheckBit(int iValue)
{
    int iMask=0x00000240;
    int iResult=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }
    
    iResult=iValue ^ iMask;
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