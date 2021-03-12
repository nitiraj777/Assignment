#include "header.h"

int DisplayFactorMultiplication(int iValue)
{
    int iCnt=0;
    int iAns=1;

    for(iCnt=2;iCnt<=iValue/2;iCnt++)
    {
        if((iValue % iCnt)==0)
        {
            iAns=iAns*iCnt;
        }
    }
    return iAns;
}