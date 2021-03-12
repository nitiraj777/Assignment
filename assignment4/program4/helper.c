#include "header.h"

int DisplayNonFactor(int iNo2)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<iNo2;iCnt++)
    {
        if((iNo2 % iCnt) != 0)
        {
            iSum=iSum + iCnt;
            //printf("%d ",iCnt);
        }
        
    }
    return iSum;
}

