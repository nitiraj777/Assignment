// 4. Write a program which accept string from user and check whether
// it contains vowels in it or not.
// Input : “marvellous”
// Output : TRUE
// Input : “Demo”
// Output : TRUE
// Input : “xyz”
// Output : FALSE 
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Display(char *p)
{
    int iCnt=0;
    while(p[iCnt]!='\0')
    {

    
        if((p[iCnt]=='a')||(p[iCnt]=='e')||(p[iCnt]=='i')||(p[iCnt]=='o')||(p[iCnt]=='u')||(p[iCnt]=='A')||(p[iCnt]=='E')||(p[iCnt]=='I')||(p[iCnt]=='O')||(p[iCnt]=='U'))
        {
            return TRUE;
        }
        iCnt++;
    }
    // return FALSE;
}
int main()
{
    char ch[255];
    BOOL bRet=FALSE;

    printf("Enter string\n");
    scanf("%[^\n]%*c",&ch);

    bRet=Display(ch);
    if(bRet==TRUE)
    {
        printf("it contains vowels in it");
    }
    else
    {
        printf("it not contains vowels in it");
    }
    return 0;
    
}