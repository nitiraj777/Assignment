// 1.Write a program which accept string from user count number of
// words from string
// Input : “Marvellous Multi OS”
// Output : 3
// Input : “ Marvellous Multi OS Pune”
// Output : 4 

#include<stdio.h>

int DisplayCount(char *p)
{
    int iCnt=0,iCnt1=0;
    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>='A')||(p[iCnt]<='Z')||(p[iCnt>='a'])||(p[iCnt]<='z'))
        {

            
        }
        if(p[iCnt]==' ')
        {
            iCnt1++;
        }
        iCnt++;
    }
    iCnt1++;
    return iCnt1;
}
int main()
{
    char arr[30]={'\0'};
    int iRet=0;

    printf("Enter string:\t");
    scanf("%[^'\n']s",arr);

    iRet=DisplayCount(arr);
    printf("\nnumber of words from string are:%d\t",iRet);

    return 0;

}