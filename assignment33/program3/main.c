// 3. Write a program which accept one number from user and toggle 7th bit of
// that number. Return modified number.
// Input : 137
// Output : 201 

//         0000 0000 0000 0000 0000 0000 0100 0000
//     0x   0    0    0    0    0    0    4    0
#include<stdio.h>


int CheckBit(int iValue)
{
    int iMask=0x00000040;
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