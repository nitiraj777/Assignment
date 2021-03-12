#include "header.h"

int DifferenceEvenOdd(int iNo2)
{
    int iCnt=0;
    int iMult=1;
    int iMult1=1;
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iMult=iMult*iCnt;
            //printf("%d\n\n",iCnt);
        }
        else
        {
            iMult1=iMult1*iCnt;
            //printf("%d\n",iCnt);
        }
        
    }
    return iMult-iMult1;
}