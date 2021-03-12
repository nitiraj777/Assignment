// 4. Accept N numbers from user and display all such numbers which contains
// 3 digits in it.
// Input : N : 6 
//  Elements : 8225 665 3 76 953 858
// Output : 665 953 858 

#include<stdio.h>
#include<stdlib.h>

void DIGITS(int * p,int iSize)
{
    int iCnt=0;
    int iDigit=0;
    int iCnt1=0;
    if(iSize<=0)
    {
        return;
    }
    if(p==NULL)
    {
        return;
    }
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        int iNo=p[iCnt];
        while(iNo!=0)
        {
            iNo= iNo/10;
            iCnt1++;
        }
        if(iCnt1==3)
        {
            printf("%d\t",p[iCnt]);
        }
        iCnt1=0;
    }
  
   
}
int main()
{
   
    int iNo=0;
    int * ptr=NULL;
    int iCnt=0;
  
   
    printf("Enter No Number:");
    scanf("%d",&iNo);

    ptr=(int*)malloc(sizeof(int)*iNo);

    if(ptr==NULL)
    {
        return -1;
    }

    printf("Enter elements of array :\n");
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    DIGITS(ptr,iNo);
 
    free(ptr);
    return 0;
}