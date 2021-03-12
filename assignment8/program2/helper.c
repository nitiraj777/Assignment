
#include "header.h"

void PrintWord(int iValue)
{
    switch(iValue)
    {
        case 1:
            if((iValue==1) || (iValue==-1))
            {
                printf("one");
            }
            break;
        case 2:
             if((iValue==2) || (iValue==-2))
            {
                printf("Two");
            }
            break;
        case 3:
             if((iValue==3) || (iValue==-3))
            {
                printf("Three");
            }
            break;
        case 4:
             if((iValue==4) || (iValue==-4))
            {
                printf("Four");
            }
            break;
        case 5:
             if((iValue==5) || (iValue==-5))
            {
                printf("Five");
            }
            break;
        case 6:
             if((iValue==6) || (iValue==-6))
            {
                printf("Six");
            }
            break;
        case 7:
             if((iValue==7) || (iValue==-7))
            {
                printf("Seven");
            }
            break;
        case 8:
             if((iValue==8) || (iValue==-8))
            {
                printf("Eight");
            }
            break;
        case 9:
             if((iValue==9) || (iValue==-9))
            {
                printf("Nine");
            }
            break;
        case 10:
             if(iValue == 0)
            {
                printf("Zero");
            }
            break;
        default:
            printf("Invalid input");
            break;

    }
}