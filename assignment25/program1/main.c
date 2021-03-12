// 1. Accept Character from user and check whether it is alphabet or not
// (A-Z a-z).
// Input : F
// Output : TRUE
// Input : &
// Output : FALSE 

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckAlphabet(char ch1)
{
    if(((ch1>=65)&&(ch1<=90))||((ch1>=97)&&(ch1<=122)))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    char ch='\0';
    BOOL bRet=FALSE;
    printf("Enter Character\n");
    scanf("%c",&ch);
    bRet=CheckAlphabet(ch);
    if(bRet==TRUE)
    {
        printf("It is Alphabet");
    }
    else
    {
        printf("it is not alphabet");
    }
    
}