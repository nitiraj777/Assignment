// 4. Accept number from user and display below pattern.
// Input : 4
// Output : # 1 * # 2 * # 3 * # 4 * 

#include<stdio.h>
void Pattern(int iNo1)
{
    int iCnt=0;
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        printf("#\t %d\t *\t",iCnt);
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






