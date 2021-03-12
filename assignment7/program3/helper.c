#include "header.h"

int DigitBetween(int iValue)
{
    int iCnt=0;
    int iDigit=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }
    while(iValue != 0)
    {
        iDigit=iValue % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
        iValue=iValue/10;
    }
    return iCnt;
}