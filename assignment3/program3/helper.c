#include "header.h"

void DisplayEvenFactor(int iValue)
{
    int iCnt=1;
    if(iValue<0)
    {
        iValue=-iValue;
    }
    if((iValue==0) || (iValue==1))
    {
        printf("Error:Invalid input");
    }
    for(iCnt=1;iCnt<=iValue/2;iCnt++)
    {
         if((iValue % iCnt)==0 && (iCnt % 2)==0)
        {
            printf("%d ",iCnt);
        }
          
    }
}