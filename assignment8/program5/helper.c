#include "header.h"

void TableReverse(int iValue)
{
    int iCnt=0;
    int iFact=0;

    if(iValue<0)
    {
        iValue=-iValue;
    }

    for(iCnt=10;iCnt>=1;iCnt--)
    {
        iFact=iValue*iCnt;
        printf("%d ",iFact);
    }
}