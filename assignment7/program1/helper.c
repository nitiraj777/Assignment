
#include "header.h"

int CountEven(int iValue)
{
    int iCnt=0;
    int iDigit=0;

    while(iValue != 0)
    {
        iDigit=iValue % 10;
        if((iDigit % 2)==0)
        {
            iCnt++;
        }
        iValue=iValue/10;
    }
    return iCnt;
}