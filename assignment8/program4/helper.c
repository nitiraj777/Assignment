#include "header.h"

void DisplayTable(int iValue)
{
    int iCnt=0;
    if(iValue<0)
    {
        iValue=-iValue;
    }

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        int iTable=iValue*iCnt;
        printf("%d ",iTable);
    }
}
