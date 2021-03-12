// 2. Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strncpy()
// function)
// Input : “Marvellous Multi OS”
//  10
// Output : “Marvellous
// Note : If third parameter is greater than the size of source string then
// copy whole string into destination. 

#include<stdio.h>
#include<string.h>

int LastOccurance(char *p,char *ch,int iNo)
{
   
    int iCnt=0;

    while(p[iCnt]!='\0')
    {
        ch[iCnt]=p[iCnt];
        iCnt++;

    }

}
int main()
{
    char arr[30]={'\0'};
    char ch[30]={'\0'};
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^\n]s",arr);

    iRet=LastOccurance(arr,ch,10);
    printf("String after copy:%s",ch);
    return 0;
}