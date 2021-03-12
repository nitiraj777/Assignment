// 4. Accept sing from user and reverse the contents of that string by
// toggling the case.
// Input : “aCBdef”
// Output : “FEDcbA” 

#include<stdio.h>

void DisplayToggling(char *p)
{
    int Start=0,Last=0,temp=0;;
    
    while(p[Last]!='\0')
    {
        Last++;
    }
    Last--;   
    while(p[Start]<=p[Last])
    {
        temp=p[Start];
        p[Start]=p[Last];
        p[Last]=temp;
       
        if((p[Start]>='A') && (p[Start]<='Z'))
        {
            p[Start]=p[Start]+32;
        }
        else if((p[Start]>='a') && (p[Start]<='z'))
        {
            p[Start]=p[Start]-32;
        }
        if((p[Last]>='A') && (p[Last]<='Z'))
        {
            p[Last]=p[Last]+32;
        }
        else if((p[Last]>='a') && (p[Last]<='z'))
        {
            p[Last]=p[Last]-32;
        }
        
        Start++;
        Last--;
    }

}

int main()
{
    char ch[30]={'\0'};

    printf("Enter string:\t");
    scanf("%[^'\n']s",ch);

    DisplayToggling(ch);
    printf("\n%s",ch);
    return 0;
}


