#include "header.h"


void DisplayEvenNumber(int iValue)
{
    int iCnt=0;
    int iSum=0;

    if(iValue==0)
    {
        printf("Error: Invalid input");
    }
    if(iValue<0)
    {
        iValue=-iValue;
    }
    // for(iCnt=1;iCnt<=iValue;iCnt++)
    // {
    //     iSum=iSum+2;
    //     printf("%d ",iSum);
    // }
     for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        if((iCnt%2)==0)
        {
            iSum=iCnt;
            printf("%d ",iSum);
        }
        
    }
}