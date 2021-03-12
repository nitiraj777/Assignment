// 4. Write a program which accept string from user and copy that
// characters of that string into another string by converting all capital
// characters into small case.
// Input : “Marvellous Python 2”
// Output : “marvellous python 2” 
#include<stdio.h>

void StrcpySmallToCapital(char *p,char *q)
{
    int iCnt=0;

    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>='A') && (p[iCnt]<='Z'))
        {
            q[iCnt]=p[iCnt]+32;
            iCnt++;
        }
        else
        {
            q[iCnt]=p[iCnt];
            iCnt++;
        }
        
    }
}
int main()
{
    char arr[30]={'\0'};
    char ch[30]={'\0'};

    printf("enter string:\n");
    scanf("%[^'\n']",arr);

    StrcpySmallToCapital(arr,ch);

    printf("%s",ch);

    return 0;
    
}