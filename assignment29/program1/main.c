// 1.Write a program which accept string from user and accept one
// character. Check whether that character is present in string or not.
// Input : “Marvellous Multi OS”
//  e
// Output : TRUE
// Input : “Marvellous Multi OS”
//  W
// Output : FALSE 
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckCharacter(char *p,char cValue)
{
    int iCnt=0;
    while(p[iCnt]!='\0')
    {
        if(p[iCnt]==cValue)
        {
            break;;
        }
        iCnt++;
    }
    if(p[iCnt]==cValue)
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
    char arr[255]={'\0'};
    char ch='\0';
    BOOL bRet=FALSE;
    printf("Enter String\n");
    scanf("%[^\n]%*c",&arr);

    printf("Enter character\n");
    scanf("%c",&ch);
    
    bRet=CheckCharacter(arr,ch);
    if(bRet==TRUE)
    {
        printf("Character is present in string");
    }
    else
    {
        printf("Character is not present");
    }
    return 0;
    
}