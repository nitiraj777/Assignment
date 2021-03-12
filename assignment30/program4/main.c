// 4. Write a program which accept string from user and copy small
// characters of that string into another string.
// Input : “Marvellous multi OS”
// Output : “arvellous multi” 
#include<stdio.h>

void StrcpySmall(char *p,char *q)
{
    int iCnt=0;
    while(*p!='\0')
    {
        if(*p==' ')
        {
                *q=*p;
                q++;
                p++;
        }
        if((*p>='a')&&(*p<='z'))
        {
     
            *q=*p;
            q++;
        }

      
        *p++;
    }
}
int main()
{
    char arr[30]={'\0'};
    char ch[30]={'\0'};

    printf("enter string:\n");
    scanf("%[^'\n']",arr);

    StrcpySmall(arr,ch);

    printf("%s",ch);

    return 0;
    
}