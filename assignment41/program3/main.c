// 3. Write a program which display product of all digits of all element from
// singly linear linked list. (Don’t consider 0)
// Function Prototype :
// void DisplayProduct( PNODE Head);
// Input linked list : |11|->|20|->|32|->|41|
// Output : 1 2 6 4 

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;
void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
    
}
void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("%d\t",Head->data);
        Head=Head->next;
    }
}
int DisplayProduct(PNODE Head)
{
    int iDigit=0,iNew=1;
   while(Head!=NULL)
   {
       while(Head->data!=0)
       {
           iDigit=(Head->data)%10;
            if(iDigit!=0)
           {
               iNew=iNew*iDigit;
           }
           
           Head->data=(Head->data)/10;
       }
       printf("%d\t",iNew);
       iNew=1;
        Head=Head->next;
   }
      
}
int main()
{
    PNODE First=NULL;
    int no=0,Pos=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&no);
    InsertFirst(&First,no);

    printf("Enter Number\n");
    scanf("%d",&no);
    InsertFirst(&First,no);

    printf("Enter Number\n");
    scanf("%d",&no);
    InsertFirst(&First,no);

    printf("Enter Number\n");
    scanf("%d",&no);
    InsertFirst(&First,no);

    Display(First);
    printf("\n");
    DisplayProduct(First);

    
    
    return 0;
}