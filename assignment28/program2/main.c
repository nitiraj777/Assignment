// 2.Write a program which accept string from user and convert it into
// upper case.
// Input : “Marvellous Multi OS”
// Output : MARVELLOUS MULTI OS 
#include<stdio.h>

void DisplayUpper(char *p)
{
    int iCnt=0,iCnt1=0;
    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>=97)&&(p[iCnt]<=122))
        {
            printf("%c",p[iCnt]-32);
        }
        else
        {
            printf("%c",p[iCnt]);
        }
        
        iCnt++;
    }
    
}
int main()
{
    char ch[255];
    printf("Enter String\n");
    scanf("%[^\n]%*c",&ch);

    DisplayUpper(ch);

    return 0;
}