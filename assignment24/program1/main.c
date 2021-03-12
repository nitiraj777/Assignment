// 1. Accept N numbers from user and return the largest number.
// Input : N : 6
//  Elements : 85 66 3 66 93 88
// Output : 93 

#include<stdio.h>
#include<stdlib.h>

int MAXIMUM(int * p,int iSize)
{
    int iCnt=0;
    int iMax=0;
    if(iSize<=0)
    {
        return -1;
    }
    if(p==NULL)
    {
        return -2;
    }
    iMax=p[0];
    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(p[iCnt]>iMax)
        {
            iMax=p[iCnt];
        }
    }
    return iMax;
}
int main()
{
   
    int iNo=0;
    int * ptr=NULL;
    int iCnt=0;
    int iRet=0;
   
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
    iRet=MAXIMUM(ptr,iNo);
    
    printf("Maximum number is :%d",iRet);
    free(ptr);
    return 0;
}