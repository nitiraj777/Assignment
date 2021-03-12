// 3. Write a program which accept string from user and copy that
// characters of that string into another string by converting all small
// characters into capital case.
// Input : “Marvellous Python 2”
// Output : “MARVELLOUS PYTHON 2” 
#include<stdio.h>

void CapitalStrcpy(char *p,char *q)
{
    int iCnt=0,iCnt1=0;;

    while(p[iCnt]!='\0')
    {
  
        
        if((p[iCnt]>='a') && (p[iCnt]<='z'))
        {
            q[iCnt]=p[iCnt]-32;
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

    printf("Enter your string:\n");
    scanf("%[^'\n']s",arr);

    CapitalStrcpy(arr,ch);

    printf("%s",ch);

    return 0;
}