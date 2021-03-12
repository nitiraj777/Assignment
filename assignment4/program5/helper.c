#include "header.h"

int DisplayNonFactor(int iNo2)
{
    int iCnt=0;
    int iSum1=0;
    for(iCnt=1;iCnt<iNo2;iCnt++)
    {
        if((iNo2 % iCnt) != 0)
        {
            iSum1=iSum1 + iCnt;
            //printf("%d ",iCnt);
        }
        
    }
    return iSum1;
}

int DisplayFactor(int iNo2)
{
    int iCnt=0;
    int iSum2=0;
    for(iCnt=1;iCnt<iNo2;iCnt++)
    {
        if((iNo2 % iCnt) == 0)
        {
            iSum2=iSum2+ iCnt;
            //printf("%d ",iCnt);
        }
        
    }
    return iSum2;
}

int FactorDifference(int iNo3)
{

    int iAns1=0;
    int iAns2=0;
    int iAns=0;

    iAns1=DisplayFactor(iNo3);
    iAns2=DisplayNonFactor(iNo3);

    iAns=iAns1-iAns2;
    return iAns;
}


