// 5. Write a program which accept one number from user and range of
// positions from user. Toggle all bits from that range.
// Input : 897 9 13
// Toggle all bits from position 9 to 13 of input number ie 879. 

#include<stdio.h>

int ToogleBits(int iValue,int iPos1,int iPos2)
{
    int iMask=0x00000001;
    int i=0;
    for(i=iPos1;i<=iPos2;i++)
    {
        iMask=iMask<<(iPos1-1);

        iResult=iMask
    
    }
}
int main()
{
    int iNo=0;
    int iPos1=0,iPos2=0;
    int iRet=0;
    printf("Enter number\n");
    scanf("%d",&iNo);

    printf("Enter Range\n");
    scanf("%d %d",&iPos1,&iPos2);

    iRet=ToogleBits(iNo,iPos1,iPos2);
    printf("number after Toogle is %d",iRet);

    return 0;
}

