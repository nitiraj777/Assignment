// 3.Write a program which accept string from user and toggle the case.
// Input : “Marvellous Multi OS”
// Output : mARVELLOUS mULTI os 

#include<stdio.h>

void DisplayToggle(char *p)
{
    int iCnt=0;
    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>=97)&&(p[iCnt]<=122))
        {
            printf("%c",p[iCnt]-32);
        }
        else if((p[iCnt]>=65)&&(p[iCnt]<=90))
        {
            printf("%c",p[iCnt]+32);
        }
        else
        {
            printf(" ");
        }
        
        
        iCnt++;
    }
    
}
int main()
{
    char ch[255];
    printf("Enter String\n");
    scanf("%[^'\n']s",&ch);

    DisplayToggle(ch);
    return 0;
}