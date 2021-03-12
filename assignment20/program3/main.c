// 3. Design application for school management system.
// As school is primary there are 4 standards from 1 to 4.
// School fees of each standard is different.
// For first standard fees are 8900, for second standard 12790, for
// third standard 21000 and for fourth standard fees are 23450.
// We have to accept standard from user and display the
// corresponding fees.
// Input : 2 Output : 12790
// Input : 4 Output : 23450
// Input : 6 Output : Wrong input 
#include<stdio.h>
int DisplayFee(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    switch(iNo)
    {
        case 1:
            if(iNo==1)
            {
                printf("Fees for first class is 8900");
            }
            break;
        case 2:
            if(iNo==2)
            {
                printf("Fees for second class is 12790");
            }
            break;
        case 3:
            if(iNo==3)
            {
                printf("Fees for third class is 21000");
            }
            break;
        case 4:
            if(iNo==4)
            {
                printf("Fees for fourth class is 23450");
            }
            break;
        default:
            printf("Error:Invalid input");
    }
}
int main()
{
    int iStandard=0;
    int iRet=0;
    printf("Enter your standard\n");
    scanf("%d",&iStandard);

    iRet=DisplayFee(iStandard);

    return 0;
}