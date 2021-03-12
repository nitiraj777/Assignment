// 1.Write a program which accept string from user and print below
// pattern.
// Input : “Marvellous”
// Output : M a r v e l l o u s
//  M a r v e l l o u s
//  M a r v e l l o u s
//  M a r v e l l o u s
//  M a r v e l l o u s
//  M a r v e l l o u s
//  M a r v e l l o u s
//  M a r v e l l o u s
//  M a r v e l l o u s
//  M a r v e l l o u s
// Input : “PPA”
// Output : P P A
//  P P A
//  P P A 

#include<Stdio.h>

void Display(char *p)
{
    int iCnt=0,i=0,iCnt1=0;
    while(p[iCnt]!='\0')
    {
        iCnt++;
    }
    printf("%d\n",iCnt);
    for(i=0;i<=iCnt;i++)
    {
        while(p[iCnt1]!='\0')
        {
            printf("%c\t",p[iCnt1]);
            iCnt1++;
        }
        iCnt1=0;
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