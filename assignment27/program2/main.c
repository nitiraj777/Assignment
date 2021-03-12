// 2. Write a program which accept string from user and count number of
// small characters.
// Input : “Marvellous”
// Output : 9 
#include<stdio.h>

int CountSmall(char *p)
{
    int iCnt=0,iCnt1=0;
    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>=97)&&(p[iCnt]<=122))
        {
            iCnt1++;
        }
        iCnt++;
    }
    return iCnt1;
}
int main()
{
    char ch[255];
    int iRet=0;

    printf("Enter String\n");
    scanf("%s",&ch);

    iRet=CountSmall(ch);

    printf("%d",iRet);

    return 0;
}