// 1.Write a program which accept one number from user and count number of
// ON (1) bits in it without using % and / operator.
// Input : 11
// Output : 3

//         0000 0000 0000 0000 0000 0000 0100 0000
//     0x   0    0    0    0    0    0    4    0
#include<stdio.h>


int CheckBit(int iValue)
{
    int iMask=0x00000001;
    int iOriginal=iValue;
    int iResult=0;
    int iCnt=0,i=0;
    int iCount=0;
    int iRem=0;
    if(iValue<0)
    {
        iValue=-iValue;
    }
    while(iValue!=0)
    {
        iRem=iValue%2;
        iValue=iValue/2;
        iCnt++;
    }
    //printf("%d\n",iCnt);
    for(i=1;i<iCnt;i++)
    {
        iMask=iMask<<(i-1);
        iResult=iOriginal & iMask;
        printf("iMask is %d\n",iMask);
        printf("iResult is %d\n",iResult);
        
        if(iResult==iMask)
        {
            iCount++;
        }
        printf("count is %d\n",iCount);
        printf("iCnt %d\t",i);
    }
   
    
    return iCount;
 
    
    
}
int main()
{
    int iNo=0;
    int bRet=0;

    printf("Enter number:");
    scanf("%d",&iNo);

    bRet=CheckBit(iNo);

   printf("%d",bRet);
   return 0;
}