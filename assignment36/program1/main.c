// 1. Write a program which accepts 2 strings from user and concat N
// characters of second string after first string.Value of N should be
// accepted from user. (Implement strncat() function).
// Note : If third parameter is greater than the size of second string then
// concat whole string after first string. 
// Input : “Marvellous Infosystems”
//  “Logic Building”
//  5
// Output : “Marvellous Infosystems Logic” 

#include<stdio.h>
void StrcatX(char *p,char *q,int iNo1)
{
    int iCnt=0,iCnt1=0;;

    while(p[iCnt]!='\0')
    {
        iCnt++;
    }
    
    p[iCnt]=' ';
    iCnt++;
    while(q[iCnt1]!='\0')
    {
        
        p[iCnt]=q[iCnt1];
        iCnt++;
        iCnt1++;
        if(iCnt1==iNo1)
        {
            break;
        }
    }
}

int main()
{
    int iNo=0;
    char arr[30]={'\0'};
    char ch[30]={'\0'};

    printf("Enter 1st string:\n");
    scanf("%[^'\n']s",&arr);

    printf("Enter 2nd string\n");
    scanf(" %[^'\n']s",&ch);

    printf("Enter Nth number:\n");
    scanf("%d",&iNo);

    StrcatX(arr,ch,iNo);
    printf("%s",arr);
    return 0;

}