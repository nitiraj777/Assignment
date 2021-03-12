
#include "header.h"

void DisplayRange(int iNo3,int iNo4)
{
    int iCnt=0;
    if(iNo3>iNo4)
    {
        printf("invallid input");
    }

    for(iCnt=iNo3;iCnt<=iNo4;iCnt++)
    {
        printf("%d ",iCnt);
    }
}