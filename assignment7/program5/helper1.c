#include "header.h"

int DifferenceSummanation(int iValue)
{
    int iEven=0;
    int iOdd=0;
    int iDigit=0;

    int iCnt=0;
    if(iValue<0)
    {
        iValue=-iValue;
    }
    while(iValue !=0)
    {
        iDigit=iValue % 10;
        if((iDigit % 2)==0)
        {
            iEven +=iDigit;
        }
        else
        {
            iEven-=iDigit;
        }

        iValue=iValue/10;
        
    }
    return iEven;
}