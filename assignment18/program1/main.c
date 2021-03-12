// 1. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 4 iCol = 4
// Output :
//  *
//  * *
//  * * *
//  * * * * 


#include<stdio.h>

void Pattern(int iRows,int iCol)
{
    int i=0,j=0;
    int iSum=0;
    if(iRows<0)
    {
        iRows=-iRows;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }
    if(iRows != iCol)
    {
        printf("Error:invalid input");
        return;
    }

    for(i=1;i<=iRows;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            
            if(i>=j)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
            
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







