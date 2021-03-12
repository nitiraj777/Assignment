#include "header.h"

void DisplayFactorDesc(int iNo2)
{

    int iCnt=0;

    for(iCnt=iNo2/2;iCnt>=1;iCnt--)
    {
        if((iNo2 % iCnt)==0)
        {
            printf("%d ",iCnt);
        }
    }
}