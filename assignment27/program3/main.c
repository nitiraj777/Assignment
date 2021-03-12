// 3. Write a program which accept string from user and return
// difference between frequency of small characters and frequency of
// capital characters.
// Input : “MarvellouS”
// Output : 6 (8-2) 

#include<stdio.h>

int CountSmall(char *p)
{
    int iCnt=0,iCnt1=0,iCnt2=0;
    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>=97)&&(p[iCnt]<=122))
        {
            iCnt1++;
        }
        else
        {
            iCnt2++;
        }
        
        iCnt++;
    }
    return iCnt1-iCnt2;
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