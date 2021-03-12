// 5. Write a program which accept string from user reverse that string
// in place.
// Input : “abcd”
// Output : “dcba”
// Input : “abba”
// Output : “abba”
#include<stdio.h>
#include<string.h>

void ReverseString(char * p)
{
    int iStart=0;
    int iEnd=0;
    int temp=0;

    while(p[iEnd]!='\0')
    {
        iEnd++;
    }

    iEnd--;
    while(iStart<iEnd)
    {
        temp=p[iStart];
        p[iStart]=p[iEnd];
        p[iEnd]=temp;
        iStart++;
        iEnd--;
    }
}
int main()
{
    char ch[255];
    int iRet=0;

    printf("Enter String\n");
    scanf("%[^\n]%*c",&ch);
    
    ReverseString(ch);
    printf("\n%s",ch);

    return 0;
}