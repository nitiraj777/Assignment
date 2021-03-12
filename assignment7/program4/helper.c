#include "header.h"

int Multiplication(int iValue)
{
    int iDigit=0;
    int iAns=1;

    if(iValue==0)
    {
        return 0;
    }
    // while(iValue != 0)
    // {
    //     iDigit=iValue % 10;
    //     if(iDigit ==0)
    //     {
    //         iDigit=1;
    //     }
    //     iAns=iAns*iDigit;

    //     iValue=iValue/10;
    // }

      while(iValue != 0)
    {
        iDigit=iValue % 10;
        if(iDigit != 0)
        {
            iAns=iAns*iDigit;
        }
       

        iValue=iValue/10;
    }
    return iAns;
}
