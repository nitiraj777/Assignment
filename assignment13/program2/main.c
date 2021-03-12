// 2. Accept number from user and display below pattern.
// Input : 5
// Output : 5 # 4 # 3 # 2 # 1 # 

#include<stdio.h>
void Pattern(int);

void Pattern(int iNo1)
{
    int iCnt=0;
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    for(iCnt=iNo1;iCnt>=1;iCnt--)
    {
        printf("%d\t #\t",iCnt);
    }
}
int main()
{
    int iNo=0;
    int iRet=0;
    

    printf("Enter number\n");
    scanf("%d",&iNo);
    
    Pattern(iNo);
    return 0;

}









