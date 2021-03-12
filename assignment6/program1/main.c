//  1.Write a program which accept number from user and display its digits in reverse
// order.
// Input : 2395
// Output : 5
//  9
//  3
//  2
// Input : 1018
// Output : 8
//  1
//  0
//  1
// Input : -1018
// Output : 8
//  1
//  0
//  1
// Input : 9000
// Output : 0
//  0
//  0
//  9


#include "header.h"
int main()
{
    int iNo=0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    DisplayReverse(iNo);
    return 0;
}

