
#include "header.h"

void DisplayPattern(int iNo1)
{
    int iCnt=0;
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    for(iCnt=65;iCnt<=65+iNo1-1;iCnt++)
    {
        printf("%c\t",((char*)iCnt));
    }
}