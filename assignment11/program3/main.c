// 3. Write a program which accept range from user and return addition of all numbers
// in between that range. (Range should contains positive numbers only)
// Input : 23 30
// Output : 212
// Input : 10 18
// Output : 126
// Input : -10 2
// Output : Invalid range 
// Input : 90 18
// Output : Invalid range 

#include "header.h"

int main()
{
    int iNo=0;
    int iNo1=0;
    int iRet=0;
    
    printf("Enter range:\n");
    scanf("%d %d",&iNo,&iNo1);

    iRet=AdditionBetRange(iNo,iNo1);
    if(iRet<=0)
    {
        printf("invalid input");
    }
    else
    {
         printf("%d\n",iRet);
    }
    
   
  
    return 0;
}





