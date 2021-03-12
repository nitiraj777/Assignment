// Write a program which accept number from user and print even factors of that
// number.
// Input : 24
// Output: 1 2 4 6 8 12 
#include "header.h"

int main()
{
    int iNo=0;


    printf("Enter number\n");
    scanf("%d",&iNo);

    DisplayEvenFactor(iNo);

    return 0;
    
    
}
