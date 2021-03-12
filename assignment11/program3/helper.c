#include "header.h"

int AdditionBetRange(int iNo2,int iNo3)
{
    int iCnt=0;
    int iSum=0;

    if((iNo2>iNo3) ||(iNo2<0))
    {
        return 0;
        
    }
    for(iCnt=iNo2;iCnt<=iNo3;iCnt++)
    {
       
        iSum=iSum+iCnt;
    }
    return iSum;
}