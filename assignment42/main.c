
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
    struct Node * prev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((*Head==NULL)&&(*Tail==NULL))
    {
        *Head=newn;
        *Tail=newn;
    }
    else
    {
        newn->next=*Head;
        (*Head)->prev=newn;
        *Head=newn;
        
    }
    (*Tail)->next=*Head;
    (*Head)->prev=*Tail;
    
}

void Display(PNODE Head,PNODE Tail)
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }

    do
    {
        printf("| %d |<->",Head->data);
        Head=Head->next;
    }while(Head!=Tail->next);
    printf("NULL\n");
}
int Count(PNODE Head,PNODE Tail)
{
    int iCnt=0;
    if((Head==NULL) && (Tail==NULL))
    {
        return 0;
    }

    do
    {
        iCnt++;
        Head=Head->next;
    } while (Head!=Tail->next);
    return iCnt;
}

void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;


    if((*Head==NULL) && (*Head==NULL))
    {
        *Head=newn;
        *Tail=newn;
    }
    else
    {
        (*Tail)->next=newn;
        newn->prev=*Tail;
        *Tail=newn;
    }
    (*Head)->prev=*Tail;
    (*Tail)->next=*Head;
}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head==NULL) && (*Tail==NULL))
    {
        return;
    }
    else if((*Head)->next==*Tail)
    {
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
        
    }
    else
    {
        *Head=(*Head)->next;
        free((*Head)->prev);
        
    }
    (*Head)->prev=*Tail;
    (*Tail)->next=*Head;
    
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    if((*Head==NULL) && (*Tail==NULL))
    {
        return;
    }
    
    else
    {
        *Tail=(*Tail)->prev;
        free((*Tail)->next);
    }
    (*Head)->prev=*Tail;
    (*Tail)->next=*Head;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int pos)
{
    PNODE newn=NULL;
    PNODE temp=*Head;
    int size=0,i=0;
    size=Count(*Head,*Tail);

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((pos<1) && (pos>size+1))
    {
        return;
    }
    else if(pos==1)
    {
        InsertFirst(Head,Tail,no);
    }
    else if(pos==size+1)
    {
        InsertLast(Head,Tail,no);
    }
    else
    {
        
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
    }

    (*Tail)->next=*Head;
    (*Head)->prev=*Tail;
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
    PNODE temp=*Head;
    int size=0,i=0;
    size=Count(*Head,*Tail);

    if((pos<1) && (pos>size+1))
    {
        return;
    }
    else if(pos==1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(pos==size+1)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
    
}
int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;
    int value=0,i=0,iRet=0,pos=0;

    for(i=1;i<=4;i++)
    {
        printf("Enter number:\t");
        scanf("%d",&value);
        InsertFirst(&First,&Last,value);
    }


    Display(First,Last);

    iRet=Count(First,Last);
    printf("Count is :%d",iRet);

    for(i=1;i<=2;i++)
    {
        printf("\nEnter number:\t");
        scanf("%d",&value);
        InsertLast(&First,&Last,value);
    }

    printf("After inserting at last position\n");
    Display(First,Last);

    DeleteFirst(&First,&Last);
    printf("After deleting first position\n");
    Display(First,Last);

    DeleteLast(&First,&Last);
    printf("After deleting last position\n");
    Display(First,Last);

    printf("Enter position for inserrt:\t");
    scanf("%d",&pos);

    printf("\nEnter number:\t");
    scanf("%d",&value);
    InsertAtPos(&First,&Last,value,pos);

    printf("\nAfter inserting at position\n");
    Display(First,Last);

    printf("\nEnter position for Delete:\t");
    scanf("%d",&pos);
    DeleteAtPos(&First,&Last,pos);

    printf("\nAfter deleting at position\n");
    Display(First,Last);
    return 0;
}