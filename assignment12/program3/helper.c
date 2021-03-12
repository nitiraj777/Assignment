#include "header.h"

int MultiplyEvenFactorial(int iNo2)
{
    int iCnt=0;
    int iMult=1;
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    for(iCnt=iNo2;iCnt>=1;iCnt--)
    {
        if((iCnt % 2)==0)
        {
            iMult=iMult*iCnt;
        }
    }
    return iMult;
}