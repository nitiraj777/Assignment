#include "header.h"

void DisplayNonFactor(int iNo2)
{
    int iCnt=0;

    for(iCnt=1;iCnt<iNo2;iCnt++)
    {
        if((iNo2 % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }
}