// 1.Write a program which accept number from user and display below pattern.
// Input : 5
// Output : * * * * * # # # # #
// Input : 6
// Output : * * * * * * # # # # # # #
// Input : -5
// Output : * * * * * # # # # #
// Input : 2
// Output : * * # #


#include "header.h"
int main()
{
    int iNo=0;
    

    printf("Enter number\n");
    scanf("%d",&iNo);

    DisplayPatter(iNo);
    return 0;
}







