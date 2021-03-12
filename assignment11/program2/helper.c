
#include "header.h"

void EvenBetweenRange(int iNo2,int iNo3)
{

    int iCnt=0;
    if(iNo2>iNo3)
    {
        printf("invalid input");
    }

    for(iCnt=iNo2;iCnt<=iNo3;iCnt++)
    {
        //printf("%d ",iCnt);
        if((iCnt % 2)==0)
        {
            printf("%d ",iCnt);
        }
    }
}