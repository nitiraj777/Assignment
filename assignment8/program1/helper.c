
#include "header.h"

void PrintNumber(int iValue)
{
    if(iValue < 50)
    {
        printf("small");
    }
    else if((iValue > 50) && (iValue < 100))
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }
    
}