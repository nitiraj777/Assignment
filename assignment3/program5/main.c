// 5. Accept on character from user and check whether that character is vowel
// (a,e,i,o,u) or not.
// Input : E Output : TRUE
// Input : d Output : FALSE 

#include "header.h"

int main()
{
    char cValue = '\0';
    BOOL cRest= FALSE;
    printf("Enter character\n");
    scanf("%c",&cValue);
    cRest=CheckVowel(cValue);

    if(cRest == TRUE)
    {
        printf("it is vowel");
    }
    else
    {
         printf("it is not vowel");
    }
    
    return 0;
} 