// 1. Write a program which search first occurrence of particular element from
// singly linear linked list.
// Function should return position at which element is found.
// Function Prototype :int SearchFirstOcc( PNODE Head , int no );
// Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input element : 30
// Output : 3 

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
int SearchFirstOcc(PNODE Head,int Pos)
{
    int iCnt=1;
    
    while(Head!=NULL)
    {
        iCnt++;
        if((Head->data)==Pos)
        {
            break;
        }
        Head=Head->next;
        
    }
    if ((Head->data)==Pos)
    {
        return iCnt;
    }
    else
    {
        return -1;
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

    printf("Enter Number\n");
    scanf("%d",&no);
    InsertFirst(&First,no);

    Display(First);

    printf("\nEnter Number to search\n");
    scanf("%d",&Pos);

    iRet=SearchFirstOcc(First,Pos);
    if(iRet==-1)
    {
        printf("Number not found");
    }
    else
    {
        printf("First occurance of number is:%d",iRet);
    }
    
    
    return 0;
}