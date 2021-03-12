#include "header.h"

int DisplayFrequency(int iValue)
{
    int iCnt=0;
    int iDigit=0;

    while(iValue != 0)
    {
        iDigit=iValue % 10;
        if((iDigit == 2) || (iDigit==-2)) //he lihili nvti condition
        {
            iCnt++;
        }
        iValue=iValue / 10;

    }
    return iCnt;
}