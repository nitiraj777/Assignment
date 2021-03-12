// 5.Write a program which accept string from user and print below
// pattern.
// Input : “Marvellous”
// Output :
//  m a r v e l l o u s
//  m a r v e l l o u s
//  m a r v e l l o u s
//  m a r v e l l o u s
//  m a r v e l l o u s
//  m a r v e l l o u s
//  m a r v e l l o u s
//  m a r v e l l o u s
//  m a r v e l l o u s
//  m a r v e l l o u s
// Input : “PPA”
// Output : 
//  p
//  p p
//  p p a 

#include<Stdio.h>

void Display(char *p)
{
    int iCnt=0,i=0,j=0;
    while(p[iCnt]!='\0')
    {
        iCnt++;
    }
    if(iCnt<10)
    {
        for(i=1;i<iCnt;i++)
        {
            for(j=0;j<=i;j++)
            {
                if((p[j]>='A') && (p[j]<='Z'))
                {
                    printf("%c\t",p[j]+32);
                }
                else
                {
                    printf("%c\t",p[j]);
                }
                
                
            }
            printf("\n");
        }
    }
    else
    {
        for(i=0;i<iCnt;i++)
        {
            for(j=0;j<iCnt;j++)
            {
                if((p[j]>='A') && (p[j]<='Z'))
                {
                    printf("%c\t",p[j]+32);
                }
                else
                {
                    printf("%c\t",p[j]);
                }
                
            }
            printf("\n");
        }
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