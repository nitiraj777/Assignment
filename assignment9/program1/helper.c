
#include "header.h"

void PrintStarDollar(int iValue)
{
    int iCnt=0;
    if(iValue<0)
    {
        iValue=-iValue;
    }

    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("$ * ");
    }
}