#include "header.h"

int DifferenceSummanation(int iValue)
{
    int iEven=0;
    if(iValue<0)
    {
        iValue=-iValue;
    }
    while(iValue !=0)
    {
         if(((iValue % 10) % 2)==0)
        {
            iEven +=(iValue % 10);
        }
        else
        {
            iEven-=(iValue % 10);
        }

        iValue=iValue/10;
    }
    return iEven;
}