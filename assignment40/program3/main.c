// 3. Write a program which returns addition of all even element from singly
// linear linked list.
// Function Prototype :int AdditionEven( PNODE Head);
// Input linked list : |11|->|20|->|32|->|41|
// Output : 52

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
int AdditionOfEven( PNODE Head)
{
    int Add=0;
    while(Head!=NULL)
    {
       if((Head->data)%2==0)
       {
           Add=Add+(Head->data);
       }
        Head=Head->next;
    }
    return Add;
}
int main()
{
    PNODE First=NULL;
    int no=0,Pos=0;
    int iRet=0,iRet2=0;

  

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
    iRet2=AdditionOfEven(First);  
    printf("\nAddition is: %d",iRet2);  
    
    return 0;
}