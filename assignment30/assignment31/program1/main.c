// 1. Write a program which accept string from user and copy that
// characters of that string into another string in reverse order.
// Input : “Marvellous Python”
// Output : “nohtyP suollevraM” 
#include<stdio.h>

void StrcpyReverse(char *p,char * ch)
{
   int iStart=0;
   int iEnd=0;
   int iCnt=0;

   while(p[iEnd]!='\0')
   {
       iEnd++;
   }
//    printf("%d",iEnd);
   for(iStart=iEnd-1;iStart>=0;iStart--)
   {
       ch[iCnt]=p[iStart];
       iCnt++;
   }
//    printf("%s\n",ch);
}
int main()
{
    char arr[30]={'\0'};
    char ch[30]={'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    StrcpyReverse(arr,ch);
    printf("%s",ch);
    return 0;

}