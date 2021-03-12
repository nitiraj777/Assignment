// 5. Write a program which accept string from user and count number of
// white spaces
// Input : “MarvellouS”
// Output : 0
// Input : “MarvellouS Infosystems”
// Output : 1
// Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
// Output : 5 
#include<stdio.h>
#include<string.h>

int CountWhiteSpace(char * p)
{
    int iCnt=0,iCnt1=0;
    while(p[iCnt]!='\0')
    {
        
        if(p[iCnt]==' ')
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
    scanf("%[^\n]%*c",&ch);
    
    iRet=CountWhiteSpace(ch);
    printf("%d",iRet);
    return 0;
}