// 2. Accept N numbers from user and return the smallest number.
// Input : N : 6
//  Elements : 85 66 3 66 93 88
// Output : 3 

#include<stdio.h>
#include<stdlib.h>

int MINIMUM(int * p,int iSize)
{
    int iCnt=0;
    int iMin=0;
    if(iSize<=0)
    {
        return -1;
    }
    if(p==NULL)
    {
        return -2;
    }
    iMin=p[0];
    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(p[iCnt]<iMin)
        {
            iMin=p[iCnt];
        }
    }
    return iMin;
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
    iRet=MINIMUM(ptr,iNo);
    
    printf("Minimum number is :%d",iRet);
    free(ptr);
    return 0;
}