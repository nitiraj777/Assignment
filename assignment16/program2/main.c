// 2. Accept number of rows and number of columns from user and display
// below pattern.
// Input : iRow = 4 iCol = 5
// Output :
//  2 4 6 8 10
//  1 3 5 7 9
//  2 4 6 8 10
//  1 3 5 7 9

//input:5,5

// 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10
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

    for(iRows=0;iRows<=iNo2-1;iRows++)
    {
        // if((iRows %2)==0)
        // {
        //     for(iCol=1;iCol<=iNo3*2;iCol++)
        //     {
        //         if((iCol%2)==0)
        //         {
        //             printf("%d\t",iCol);
        //         }
        //     }
        // }
        // else
        // {
        //      for(iCol=1;iCol<=iNo3*2;iCol++)
        //     {
        //         if((iCol%2)!=0)
        //         {
        //             printf("%d\t",iCol);
        //         }
        //     }
        // }
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







