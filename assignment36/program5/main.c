// 5. Accept string from user and check whether the string is palindrome
// or not without considering its case.

// Input : “1abccBA1”
// Output : TRUE 


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckPalindrome(char *p)
{
    char ch[30]={'\0'};
    int iCnt=0,i=0,iCnt1=0;

    while(p[iCnt]!='\0') 
    {
        ch[iCnt]=p[iCnt];
        iCnt++;
    }
    iCnt--;
    for(i=iCnt;i>=0;i++)
    {
        if(p[iCnt1]!=ch[i])
        {
            break;
        }
    }
    if(p[iCnt]!=p[i])
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
    
}
int main()
{
    BOOL bRet=FALSE;
    char arr[30]={'\0'};

    printf("Enter 1st string\n");
    scanf("%[^'\n']s",arr);

    bRet=CheckPalindrome(arr);

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