// 2. Write a program which display all palindrome elements of singly linked
// list.
// Function Prototype :
// void DisplayPallindrome( PNODE Head);
// Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
// Output : 11 6 414  

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
int Reverse(PNODE Head)
{
    int iDigit=0,iNew=0,Old=0;
   while(Head!=NULL)
   {
       Old=Head->data;
       while(Head->data!=0)
       {
           iDigit=(Head->data)%10;
           iNew=(iNew*10)+iDigit;
           Head->data=(Head->data)/10;
       }
       //printf("%d\t",iNew);
       if(iNew==Old)
       {
           printf("%d\t",iNew);
       }
       iNew=0;
       Old=0;
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

    printf("Enter Number\n");
    scanf("%d",&no);
    InsertFirst(&First,no);

    printf("Enter Number\n");
    scanf("%d",&no);
    InsertFirst(&First,no);

    Display(First);
    printf("\n");
    Reverse(First);

    
    
    return 0;
}