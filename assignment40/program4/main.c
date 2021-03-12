// =4. Write a program which return second maximum element from singly linear
// linked list.
// Function Prototype :int SecMaximum( PNODE Head);
// Input linked list : |110|->|230|->|320|->|240|
// Output : 240 

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
    int iCnt=0;
    int Max=Head->data;
    int Max2=Head->data;
    while(Head!=NULL)
    {
        if((Max)<(Head->data))
        {
            Max2=Max;
            //printf("Max2:%d",Max2);
            Max=Head->data;
        }
        //iCnt++;
        Head=Head->next;
    }
    return Max2;
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
    printf("2nd maximum  number is:%d",iRet);
    
    
    return 0;
}