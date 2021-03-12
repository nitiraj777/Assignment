// 2. Write a program which accept string from user and copy that
// characters of that string into another string by removing all white
// spaces.
// Input : “Marvel lous Pyth on” 
// Output : “MarvellousPython” 

#include<stdio.h>
#include<string.h>

int StrcpyRemoveWhiteSpace(char *p,char *ch)
{
   
    int iCnt=0,iCnt1=0;

    while(p[iCnt]!='\0')
    {
        
        if(p[iCnt]==' ')
        {
            iCnt++;
        }
        ch[iCnt1]=p[iCnt];
        iCnt++;
        iCnt1++;

    }

}
int main()
{
    char arr[30]={'\0'};
    char ch[30]={'\0'};


    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    StrcpyRemoveWhiteSpace(arr,ch);
    printf("%s",ch);
    return 0;
}
