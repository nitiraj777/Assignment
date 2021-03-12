// 1. Accept number of rows and number of columns from user and display
// below pattern.
// Input : iRow = 4 iCol = 3
// Output : 
//  * * *
//  * * *
//  * * *
//  * * * 


#include<stdio.h>
void Pattern(int iNo2,int iNo3)
{
    int iRows=0;
    int iColumn=0;
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    if(iNo3<0)
    {
        iNo3=-iNo3;
    }

    for(iRows=0;iRows<=iNo2-1;iRows++)
    {
        for(iColumn=0;iColumn<=iNo3-1;iColumn++)
        {
            printf("*\t");
        }
        printf("\n");
    }

}
int main()
{
    int iNo=0,iNo1=0;
    printf("Enter number of rows and column\n");
    scanf("%d %d",&iNo,&iNo1);

    Pattern(iNo,iNo1);
    return 0;
}







