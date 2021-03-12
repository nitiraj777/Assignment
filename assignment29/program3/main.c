// 3.Write a program which accept string from user and accept one
// character. Return index of first occurrence of that character.
// Input : “Marvellous Multi OS”
//  M
// Output : 0 
// Input : “Marvellous Multi OS”
//  W
// Output : -1
// Input : “Marvellous Multi OS”
//  e
// Output : 4 

#include<stdio.h>

int Frequency(char *p,char ch)
{
    int iCnt=0,iCnt1=0;
   
    
    while(p[iCnt]!=0)
    {

        if(p[iCnt]==ch)
        {
            break;
        }
        iCnt++;
    }
    if(p[iCnt]==ch)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
    
    
}
int main()
{
    char arr[255];
    char ch;
    int iRet=0;
    printf("Enter String\n");
    scanf("%[^\n]%*c",&arr);

    printf("Enter character\n");
    scanf("%c",&ch);

    iRet=Frequency(arr,ch);

    
    if(iRet<0)
    {
        printf("not found");
    }
    else
    {
        printf("%d",iRet);
    }
    

    return 0;
}