
// 4. Write a program which display smallest digits of all element from singly
// linear linked list.
// Function Prototype :
// void DisplaySmall( PNODE Head);
// Input linked list : |11|->|250|->|532|->|415|
// Output : 1 0 2 1 

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
int DisplaySmall(PNODE Head)
{
    int iDigit=0,iNew=0;
    int Small=-1;
   while(Head!=NULL)
   {
       while(Head->data!=0)
       {
           iDigit=(Head->data)%10;
           if(Small==-1)
           {
               Small=iDigit;
           }
           if(Small>iDigit)
            {
                Small=iDigit;
            }
           Head->data=(Head->data)/10;
       }
       printf("%d\t",Small);
       Small=-1;
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
    DisplaySmall(First);

    
    
    return 0;
}