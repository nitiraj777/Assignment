// 1. Accept number of rows and number of columns from user and display
// below pattern.
// Input : iRow = 4 iCol = 4
// Output :
//  1 2 3 4
//  5 6 7 8
//  9 1 2 3
//  4 5 6 7 


#include<stdio.h>

void Pattern(int iNo2,int iNo3)
{
    int iRows=0,iCol=0;
    int iSum=0;
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    if(iNo3<0)
    {
        iNo3=-iNo3;
    }

    for(iRows=1;iRows<=iNo2;iRows++)
    {
        for(iCol=1;iCol<=iNo3;iCol++)
        {
            iSum=iSum+1;
            if(iSum>9)
            {
                iSum=1;
            }
            printf("%d\t",iSum);
        }
        
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







