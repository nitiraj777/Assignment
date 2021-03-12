
// 3. Write a program which 2 strings from user and check whether first
// N contents of two strings are equal or not. (Implement strcmp()
// function).
// Note : If third parameter is greater than the size of second string then
// concat whole string after first string.
// Input : “Marvellous Infosystems”
//  “Marvellous Logic Building”
//  10
// Output : TRUE 


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrCpyX(char *p,char *q)
{

    int iCnt=0;

    while((p[iCnt]!='\0') && (q[iCnt]!='\0'))
    {
        if(p[iCnt]!=q[iCnt])
        {
            break;
        }
        
        iCnt++;
        // if(iCnt==iNo1)
        // {
        //     break;
        // }
        
    }
    if((p[iCnt]==q[iCnt]) || ((p[iCnt]!='\0') && (q[iCnt]!='\0')))
    {
        return TRUE;
    }
    else
    {
        return TRUE;
    }
    
}
int main()
{
    int iNo=0;
    BOOL bRet=FALSE;
    char arr[30]={'\0'};
    char ch[30]={'\0'};

    printf("Enter 1st string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter 2nd string\n");
    scanf(" %[^'\n']s",ch);

    // printf("Enter Nth number\n");
    // scanf("%d",iNo);

    bRet=StrCpyX(arr,ch);

    if(bRet==TRUE)
    {
        printf("Enter string are equal till Nth number");
    }
    else
    {
        printf("Two string are not equal");
    }
    return 0;
    
}