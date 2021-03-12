
// 3.Write a program which accept number from user and display all its non factors.
// Input : 12
// Output : 5 7 8 9 10 11
// Input : 13
// Output : 2 3 4 5 6 7 8 9 10 11 12
// Input : 10
// Output : 3 4 6 7 8 9 
#include "header.h"

int main()
{
    int iNo1=0;

    printf("Enter number\n");
    scanf("%d",&iNo1);


    DisplayNonFactor(iNo1);

    return 0;
}

