// 1.Write a program which accept string from user and convert it into
// lower case.
// Input : “Marvellous Multi OS”
// Output : marvellous multi os 
#include<stdio.h>
#include<string.h>
void Display(char *p)
{
    int iCnt=0;
    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>=65)&&(p[iCnt]<=90))
        {
            printf("%c",p[iCnt]+32);
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
    
    printf("Enter string\n");
    scanf("%[^\n]%*c",&ch);

    Display(ch);

    return 0;
}