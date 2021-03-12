// 3. Write a program which accept string from user and copy capital
// characters of that string into another string.
// Input : “Marvellous Multi OS”
// Output : “MMOS”

#include<stdio.h>

void CapitalStrcpy(char *p,char *q)
{
    int iCnt=0,iCnt1=0;;

    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>='A') && (p[iCnt]<='Z'))
        {
            q[iCnt1]=p[iCnt];
            iCnt1++;
        }
        iCnt++;
    }
}

int main()
{
    char arr[30]={'\0'};
    char ch[30]={'\0'};

    printf("Enter your string:\n");
    scanf("%[^'\n']s",arr);

    CapitalStrcpy(arr,ch);

    printf("%s",ch);

    return 0;
}