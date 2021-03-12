// 2.Write a program which accept string from user and print below
// pattern.
// Input : “Marvellous”
// Output :
//  M a r v e l l o u s
//  M a r v e l l o u
//  M a r v e l l o
//  M a r v e l l
//  M a r v e l
//  M a r v e
//  M a r v
//  M a r
//  M a
//  M
// Input : “PPA”
// Output :
//  P P A
//  P P
//  P 

#include<Stdio.h>

void Display(char *p)
{
    int iCnt=0,i=0,iCnt1=0;
    while(p[iCnt]!='\0')
    {
        iCnt++;
    }
    printf("%d\n",iCnt);
    for(i=0;i<iCnt;i++)
    {
        for(iCnt1=0;iCnt1<iCnt-i;iCnt1++)
        {
            printf("%c\t",p[iCnt1]);
        }
        printf("\n");
    
    }
        
    
}
int main()
{
    char arr[30]={'\0'};

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    Display(arr);
    return 0;
}