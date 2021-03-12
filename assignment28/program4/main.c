// 4. Write a program which accept string from user and display only
// digits from that string.
// Input : “marve89llous121”
// Output : 89121
// Input : “Demo”
// Output : 
#include<stdio.h>

void DisplayDigit(char *p)
{
    int iCnt=0;
    while(p[iCnt]!='\0')
    {
        if((p[iCnt]>=48)&&(p[iCnt]<=58))
        {
            printf("%c",p[iCnt]);
        }
        iCnt++;
    }
    // return FALSE;
}
int main()
{
    char ch[255];
    

    printf("Enter string\n");
    scanf("%[^\n]%*c",&ch);

    DisplayDigit(ch);

    return 0;
    
}