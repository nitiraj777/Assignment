// 4. Accept Character from user and check whether it is small case or
// not (a-z).
// Input : g
// Output : TRUE
// Input : D
// Output : FALSE 

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckCharacter(char ch1)
{
    if((ch1>=65)&&(ch1<=90))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
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
        printf("It is small");
    }
    else
    {
        printf("It is not small");
    }
    return 0;
    
}