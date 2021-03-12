// 4. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 4 iCol = 5
// Output :
//  4 4 4 4 4
//  3 3 3 3 3
//  2 2 2 2 2
//  1 1 1 1 1  


#include<stdio.h>

void Pattern(int iNo2,int iNo3)
{
    int iRows=0,iCol=0;
    int iMulti=iNo2;
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
            printf("%d\t",iMulti);
        }
        iMulti--;
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







