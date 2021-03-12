#include "header.h"

BOOL CheckVowel(char CValue)
{
    if(((CValue =='a') || (CValue=='e') || (CValue=='i')||(CValue=='o')||(CValue=='u')) ||
     ((CValue =='A') || (CValue=='E') || (CValue=='I')||(CValue=='O')||(CValue=='U')))
    {
        return TRUE;
    }
    else 
    {
       return FALSE;
    }
}