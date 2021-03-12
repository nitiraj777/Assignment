#include "header.h"


void OddNumber(int iNo2)
{
    int iCnt=0;

    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    for(iCnt=1;iCnt<iNo2;iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d ",iCnt);
        }
    }
}
