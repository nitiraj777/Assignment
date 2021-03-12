#include "header.h"

int DisplayFrequency(int iValue)
{
    int iCnt=0;
    int iDigit=0;
    //negative number la problem yet ahe so updater lihile pahije
    if(iValue<0)
    {
        iValue=-iValue;
    }
    while(iValue != 0)
    {
        iDigit=iValue % 10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iValue=iValue / 10;

    }
    return iCnt;
}