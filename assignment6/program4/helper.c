#include "header.h"

int DisplayFrequency(int iValue)
{
    int iCnt=0;
    int iDigit=0;

    while(iValue != 0)
    {
        iDigit=iValue % 10;
        if((iDigit == 4) ||(iDigit==-4))
        {
            iCnt++;
        }
        iValue=iValue / 10;

    }
    return iCnt;
}