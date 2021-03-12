// 2. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 4 iCol = 4
// Output : 
//  A B C D    1
//  a b c d    2
//  A B C D    3
//  a b c d     4


#include<stdio.h>

void Pattern(int iNo2,int iNo3)
{
    int iRows=0,iCol=0;
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
        if((iRows % 2)==0)
        {
            for(iCol=97;iCol<=97+iNo3-1;iCol++)
            {
                printf("%c\t",iCol);
            } 
           
           
        }
        else
        {
            for(iCol=65;iCol<=65+iNo3-1;iCol++)
            {
                printf("%c\t",iCol);
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







