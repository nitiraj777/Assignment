// 2. Accept Character from user and check whether it is capital or not
// (A-Z).
// Input : F
// Output : TRUE
// Input : d
// Output : FALSE 

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckCharacter(char ch1)
{
    if((ch1>=65)&&(ch1<=90))
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

    bRet=CheckCharacter(ch);
    if(bRet==TRUE)
    {
        printf("It is Capital");
    }
    else
    {
        printf("It is small");
    }
    return 0;
    
}