
#include "header.h"

void DisplayPatter(int iValue)
{
    int iCnt=0;
    int iCnt1=0;
    if(iValue<0)
    {
        iValue=-iValue;
    }

    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("* ");
    }
    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("# ");
    }
}