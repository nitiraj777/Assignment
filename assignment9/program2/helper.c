
#include "header.h"

void PrintNumber(int iNo2)
{

    int iCnt=0;
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        printf("%d ",iCnt);
    }
}