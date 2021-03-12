#include "header.h"

void Multiple(int iNo2)
{
    int iCnt=0;
    int iMult=0;

    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    // if(iNo2==1)
    // {
    //     printf("1");
    // }
   
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        iMult=iNo2*iCnt;
        printf("%d ",iMult);
    }
    
  
}