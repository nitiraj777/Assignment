// 1.Write a program which accept string from user and count number of
// capital characters.
// Input : “Marvellous Multi OS”
// Output : 4 
#include<stdio.h>
#include<string.h>
int Display(char *p)
{
    int iCnt=0,iCnt1=0;
    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>=65)&&(p[iCnt]<=90))
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
    printf("Enter string\n");
    scanf("%[^\n]%*c",&ch);

    
    iRet=Display(ch);

    printf("%d",iRet);

    return 0;
}