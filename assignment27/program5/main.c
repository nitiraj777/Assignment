// 3. Write a program which accept string from user and display it inn
// reverse order.
// Input : “MarvellouS”
// Output : “SuollevraM” 
#include<stdio.h>
#include<string.h>

void DisplayReverse(char * p)
{
    int iCnt=0;

    // printf("%d\n",sizeof(p));
    // printf("%d",strlen(p));
    for(iCnt=strlen(p);iCnt>=0;iCnt--)
    {
        printf("%c",p[iCnt]);
    }
}
int main()
{
    char ch[255];

    printf("Enter String\n");
    scanf("%[^\n]%*c",&ch);
    
    DisplayReverse(ch);
    return 0;
}