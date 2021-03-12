// 1.Write a program which accept number from user and print that number of $ & *
// on screen.
// Input : 5
// Output : $ * $ * $ * $ * $ *
// Input : 3
// Output : $ * $ * $ *
// Input : -3
// Output : $ * $ * $ * 


#include "header.h"
int main()
{
    int iNo=0;
    

    printf("Enter number\n");
    scanf("%d",&iNo);

    PrintStarDollar(iNo);
    return 0;
}







