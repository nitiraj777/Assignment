#include "header.h"

int DisplayEven(int iValue)
{
    int iCnt=0;
    int iDigit=0;
    int iRet1=0;

    while(iValue != 0)
    {
        iDigit=iValue % 10;
        if((iDigit % 2)==0)
        {
          iRet1=iRet1+iDigit;
        }
        iValue=iValue / 10;

    }
    return iRet1;
}

int DisplayOdd(int iValue)
{
    int iCnt1=0;
    int iDigit=0;
    int iRet2=0;

    while(iValue != 0)
    {
        iDigit=iValue % 10;
        if((iDigit % 2)!=0)
        {
            iRet2=iRet2+iDigit;
        }
        iValue=iValue / 10;

    }
    return iRet2;
}

int DifferenceSummanation(int iValue)
{
    int iAns1=0;
    int iAns2=0;
    int iAns=0;

    iAns1=DisplayEven(iValue);

    iAns2=DisplayOdd(iValue);

    iAns=iAns1-iAns2;
    return iAns;

}