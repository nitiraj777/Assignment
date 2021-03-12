// 5. Accept number from user and display below pattern.
// Input : 8
// Output : 2 4 6 8 10 12 14 16 

#include<stdio.h>
void Pattern(int iNo1)
{
    int iCnt=0;
    int iMult=0;
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        iMult=iMult+2;
        printf("%d ",iMult);
    }
}
int main()
{
    int iNo=0;
 
    printf("Enter number");
    scanf("%d",&iNo);

    Pattern(iNo);
  
    return 0;
}






