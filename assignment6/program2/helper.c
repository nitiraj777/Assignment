
#include "header.h"
BOOL CheckZero(int iNo2)
{
    BOOL iDigit=0;
    int iCnt=0;

    if(iNo2==0)
    {
        return TRUE;
    }

    while(iNo2 != 0)
    {
       
        iDigit=iNo2 % 10;
       
        if(iDigit == 0)
        {
            break;
            //return TRUE; loop madhun return krayche nste 
        }    
        iNo2=iNo2/10;
    }
    if(iDigit==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
        
    }
    
}