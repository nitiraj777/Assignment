// 3. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 3 iCol = 5
// Output : 
//  A A A A A
//  B B B B B
//  C C C C C 


#include<stdio.h>

void Pattern(int iNo2,int iNo3)
{
    int iRows=0,iCol=0;
    char iMulti='A';
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
            printf("%c\t",iMulti);
        }
        iMulti++;
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







