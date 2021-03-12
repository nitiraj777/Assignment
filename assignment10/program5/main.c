// 5. Write a program which accept area in square feet and convert it into square
// meter. (1 square feet = 0.0929Square meter)
// Input : 5
// Output : 0.464515
// Input : 7
// Output : 0.650321 

#include "header.h"
int main()
{
    int iNo=0;
   double fRet=0.0;
    

    printf("Enter Area in square feet:\n");
    scanf("%d",&iNo);

    fRet=SquareMeter(iNo);

    printf("Area in square meter is:%0.6f",fRet);
    return 0;
}




