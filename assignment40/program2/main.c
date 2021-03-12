// 2. Write a program which displays all elements which are prime from singly
// linear linked list.
// Function Prototype :int DisplayPrime( PNODE Head);
// Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
// Output : 11 17 41 89 


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
int Count(PNODE Head)
{
    int iCount=0;
    while(Head!=NULL)
    {
        iCount++;
        Head=Head->next;
    }
    return iCount;
}
void DisplayPerfect( PNODE Head)
{
    while(Head!=NULL)
    {
        if(((Head->data)%2!=0)&&(((Head->data)%(Head->data))==0))
        {
            printf("%d\t",Head->data);
        }
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

    Display(First);
    printf("\n");
    DisplayPerfect(First);    
    
    return 0;
}