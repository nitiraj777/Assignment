
#include "header.h"

void DisplayReverse(int iNo2)
{

    int iCnt=0;
    int iAns=0;
    if(iNo2<0)    //updater mhntat
    {
        iNo2=-iNo2;
    }

    while(iNo2 != 0)
    {
        iAns=iNo2 % 10;
        printf("%d ",iAns);
        
        iNo2=iNo2/10;
       
    }
}