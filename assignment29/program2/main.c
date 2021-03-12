// 2.Write a program which accept string from user and accept one
// character. Return frequency of that character.
// Input : “Marvellous Multi OS”
//  M
// Output : 2
// Input : “Marvellous Multi OS”
//  W
// Output : 0 
#include<stdio.h>

int Frequency(char *p,char ch)
{
    int iCnt=0,iCnt1=0;

    if(p==NULL)
    {
        return -1;
    }
    while(p[iCnt]!=0)
    {
        if(p[iCnt]==ch)
        {
            iCnt1++;
        }
        iCnt++;
    }

    return iCnt1;
   
    
   
}
int main()
{
    char arr[255]={'\0'};
    char ch='\0';
    int iRet=0;
    printf("Enter String\n");
    scanf("%[^\n]%*c",&arr);

    printf("Enter character\n");
    scanf("%c",&ch);

    //printf("%c",ch);
    //printf("%s",arr);

    iRet=Frequency(arr,ch);

    printf("%d",iRet);

    return 0;
}