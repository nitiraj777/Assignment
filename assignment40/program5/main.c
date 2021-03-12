// 5. Write a program which display addition of digits of element from singly
// linear linked list.
// Function Prototype :int SumDigit( PNODE Head);
// Input linked list : |110|->|230|->|20|->|240|->|640|
// Output : 2 5 2 6 10 

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
void SumDigit(PNODE Head)
{
    int iSum=0,iDigit=0;
    while(Head!=NULL)
    {
        while((Head->data)!=0)
        {
            iDigit=Head->data%10;
            iSum=iSum+iDigit;
            Head->data=(Head->data)/10;
        }
        printf("%d\t",iSum);
        iSum=0;
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
    SumDigit(First);
    
    
    
    return 0;
}