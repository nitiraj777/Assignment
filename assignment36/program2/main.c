// 2. Write a program which 2 strings from user and check whether
// contents of two strings are equal or not. (Implement strcmp()
// function).
// Input : “Marvellous Infosystems”
//  “Marvellous Infosystems”
// Output : TRUE 

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL StrcpyX(char *p,char *q)
{
    int iCnt=0;

    while((p[iCnt]!='\0') && (q[iCnt]!='\0'))
    {
        if(p[iCnt]!=q[iCnt])
        {
            break;
        }
        iCnt++;
    }
    // if((p[iCnt]==q[iCnt]) || ((p[iCnt]!='\0') && (q[iCnt]!='\0')))
    if(p[iCnt]!=q[iCnt])
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
    char ch[30]={'\0'};

    printf("Enter 1st string:\n");
    scanf("%[^'\n']s",&arr);

    printf("Enter 2nd string\n");
    scanf(" %[^'\n']s",&ch);

    bRet=StrcpyX(arr,ch);
    if(bRet==TRUE)
    {
        printf("Two strings are equal");  
    }
    else
    {
        printf("Two strings are not equal");
    }
    
    return 0;

}