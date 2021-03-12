// 2. Accept amount in US dollar and return its corresponding value in Indian currency.
// Consider 1$ as 70 rupees.
// Input : 10
// Output : 700 
// Input : 3
// Output : 270
// Input : 1200
// Output : 84000 

#include "header.h"
int main()
{
    int iNo=0;
    int iRet=0;
    

    printf("Enter number\n");
    scanf("%d",&iNo);
    
    iRet=IndianCurrency(iNo);

    printf("%d",iRet);
    return 0;

}







