// If running is less than 100 kilometres then they charge 25
// rupees per kilometre .
// And if running is more than 100 kilometres then they apply 15
// rupees per kilometre after 100 kilometres.
// We have to accept number of kilometres from user and return
// the estimated rent.
// Input : 73 Output : 1825
// Input : 132 Output : 2980
// Input : 189 Output : 3835 
#include<stdio.h>
int EstimateRent(int iKilo)
{
    int iNo=0;
    if(iKilo<0)
    {
        iKilo=-iKilo;
    }
    if(iKilo<100)
    {
        return iKilo*25;
    }
    else
    {
        iNo=iKilo-100;
        return ((iNo*15)+(100*25));
    }
    

}
int main()
{
    int iStandard=0;
    int iRet=0;
    printf("Enter your Kilometer\n");
    scanf("%d",&iStandard);

    iRet=EstimateRent(iStandard);
    printf("Estimate rent is %d",iRet);

    return 0;
}