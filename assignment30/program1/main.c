// 1.Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strcpy()
// function)
// Input : “Marvellous Multi OS”
// Output : “Marvellous Multi OS” 
#include<stdio.h>
#include<string.h>
void StrcpyX(char *p,char * arr)
{
    int iCnt=0;

    while(p[iCnt]!='\0')
    {
        arr[iCnt]=p[iCnt];
        iCnt++;
    }
}
int main()
{
   char arr[30]={'\0'};
   char ch[30]={'\0'};

   printf("Enter the string\n");
   scanf("%[^'\n]s",arr);

   StrcpyX(arr,ch);

   printf("%s",ch);
   return 0;
}