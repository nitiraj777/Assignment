#include "header.h"

int Factorial(int iValue)
{
    int iCnt=0;
    int iFact=1;
    if(iValue<0)
    {
        iValue=-iValue;
    }

    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}