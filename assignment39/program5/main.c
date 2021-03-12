// 5. Write a program which return smallest element from singly linear linked
// list.
// Function Prototype :int Minimum( PNODE Head);
// Input linked list : |110|->|230|->|20|->|240|->|640|
// Output : 20

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
int Minimum(PNODE Head)
{
    int iCnt=1;
    int Min=Head->data;
    while(Head!=NULL)
    {
        if((Min)>(Head->data))
        {
            Min=Head->data;
            
        }
        Head=Head->next;
    }
    return Min;
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

    iRet=Minimum(First);
    printf("First occurance of number is:%d",iRet);
    
    
    return 0;
}