// 3. Write a program which accept distance in kilometre and convert it into meter. (1
// kilometre = 1000 Meter)
// Input : 5
// Output : 5000
// Input : 12
// Output : 12000 

#include "header.h"


int main()
{
    int iNo=0;
    int iRet=0;
    
    printf("Enter distance in kilometer\n");
    scanf("%d",&iNo);

    iRet=ConvertToMeter(iNo);
    
    printf("Distance in meter:%d",iRet);
    return 0;
}







