// 3. Accept Character from user and check whether it is digit or not
// (0-9).
// Input : 7
// Output : TRUE
// Input : d
// Output : FALSE 

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckCharacter(char ch1)
{
    if((ch1>=48)&&(ch1<=57))
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
        printf("It is digit");
    }
    else
    {
        printf("it is not digit");
    }
    return 0;
    
}
