// 4. Write a program which return largest element from singly linear linked
// list.
// Function Prototype :int Maximum( PNODE Head);
// Input linked list : |110|->|230|->|320|->|240|
// Output : 320 

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
int Maximum(PNODE Head)
{
    int iCnt=1;
    int Max=Head->data;
    while(Head!=NULL)
    {
        if((Max)<(Head->data))
        {
            Max=Head->data;
            
        }
        Head=Head->next;
    }
    return Max;
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

    iRet=Maximum(First);
    printf("First occurance of number is:%d",iRet);
    
    
    return 0;
}