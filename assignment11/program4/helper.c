#include "header.h"

void ReverseOrderRange(int iNo2,int iNo3)
{
    int iCnt=0;
    

    if(iNo2>iNo3)
    {
        printf("invalid input");
        
    }
    for(iCnt=iNo3;iCnt>=iNo2;iCnt--)
    {
      
       printf("%d ",iCnt);
    }
   
}