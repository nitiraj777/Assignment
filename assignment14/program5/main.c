// 5. Accept number of rows and number of columns from user and display
// below pattern.
// Input : iRow = 3 iCol = 4
// Output :
//  1 1 1 1
//  2 2 2 2
//  3 3 3 3
//  4 4 4 4 

#include<stdio.h>
void Pattern(int iNo2,int iNo3)
{
    int iRow=0,iCol=0;
    int iMult1=1;
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    if(iNo3<0)
    {
        iNo3=-iNo3;
    }
    for(iRow=1;iRow<=iNo2;iRow++)
    {
        for(iCol=1;iCol<=iNo3;iCol++)
        {
            
            printf("%d\t",iMult1);
        }
        iMult1++;
        printf("\n");
    }
    
}
int main()
{
    int iNo=0;
    int iNo1=0;

    printf("Enter number of rows and column\n");
    scanf("%d %d",&iNo,&iNo1);

    Pattern(iNo,iNo1);
  
    return 0;
}







