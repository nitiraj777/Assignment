// 1. Design application for hotel. According to the management
// team of hotel they are giving discount on total bill amount of
// customer.
// If bill bill amount is less than 500 then there is no discount , if
// bill amount is less than 1500 and more than 500 they give 10%
// discount.
// And if the bill amount is more than 1500 then they give 15%
// discount.
// Our application should accept total bill amount and depends on
// the discount policy we have to return the amount after applying
// discount.

// Input : 1200 Output : 1080
// Input : 290 Output : 290
// Input : 3700 Output : 3145 
#include<stdio.h>
int DisplayDiscount(int iValue)
{
    int iSum=0;
    if(iValue<0)
    {
        iValue=-iValue;
    }
    if(iValue<500)
    {
        printf("Sorry Sir No Discount\n");
        return iValue;
    }
    else if((iValue>500)&&(iValue<1500))
    {
        printf("You Have earn  discount\n");
        iSum=((iValue*10)/100);
        return (iValue-iSum);
    }
    else
    {
        printf("Sir you have earn discount\n");
        iSum=((iValue*15)/100);
        return (iValue-iSum);
    }
    
}
int main()
{
    int iAmount=0;
    int iRet=0;

    printf("Enter your total amount\n");
    scanf("%d",&iAmount);

    iRet=DisplayDiscount(iAmount);

    printf("Your total amount after discount is:%d",iRet);

    return 0;
}