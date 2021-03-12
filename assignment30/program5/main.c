// 5. Write a program which 2 strings from user and concat second string
// after first string. (Implement strcat() function).
// Input : “Marvellous Infosystems”
//  “Logic Building”
// Output : “Marvellous Infosystems Logic Building” 
#include<stdio.h>
#include<string.h>

int StrcatX(char * p,char *q)
{
    int iCnt=0;
    while(*p!='\0')
    {
        p++;
    }
    *p=' ';
    p++;
    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
}
int main()
{
    char arr[30]={'\0'};
    char ch[30]={'\0'};

    printf("enter string:\n");
    scanf("%[^'\n']s",arr);
    printf("enter string:\n");
    scanf(" %[^'\n']s",ch);

    StrcatX(arr,ch);
    printf("%s",arr);

    return 0;
}