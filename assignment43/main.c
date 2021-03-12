
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

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
   PNODE newn=NULL;
   newn=(PNODE)malloc(sizeof(NODE));
   newn->data=no;
   newn->next=NULL;

   if((*Head==NULL) && (*Tail==NULL))
   {
       *Head=newn;
       *Tail=newn;
   }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
    (*Tail)->next=*Head;
    

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

    if((*Head==NULL) && (*Tail==NULL))
    {
        *Head=newn;
        *Tail=newn;
    }
    else
    {
        (*Tail)->next=newn;
        *Tail=newn;
    }
    (*Tail)->next=*Head;
    
}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    PNODE temp2=*Head;
    if((*Head==NULL) && (*Tail==NULL))
    {
        return;
    }
    else if((*Head)->next==*Tail)
    {
        free(*Head);
        *Head=NULL;  
        *Tail=NULL;//important to check 
        
    }
    else
    {

        *Head=(*Head)->next;
        free(temp2);
    }
    
    (*Tail)->next=*Head;
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE temp=*Head;
    if((*Head==NULL) && (*Tail==NULL))
    {
        return;
    }
    else if((*Head)->next==*Tail)
    {
        free(*Head);
        *Head=NULL;  
        *Tail=NULL;//important to check 
        
    }
    else
    {
        while(temp->next->next!=(*Tail)->next)
        {
            temp=temp->next;
        }
        free(temp->next);
        *Tail=temp;
    
    }
    
    
    // temp->next=*Head;
    (*Tail)->next=*Head;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int pos)
{
    
    PNODE newn=NULL;
    PNODE temp=*Head;
    newn=(PNODE)malloc(sizeof(int));
    newn->data=no;
    newn->next=NULL;
    int size=0,i=0;
    size=Count(*Head,*Tail);

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
        temp->next=newn;
    }
    
    


    
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{

    int size=0,i=0;
    PNODE temp=*Head;
    PNODE temp2=NULL;
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
        temp2=temp->next;
        temp->next=temp->next->next;
        free(temp2);
    }

    
}
// int main()
// {
//     PNODE First=NULL;
//     PNODE Last=NULL;
//     int value=0,i=0,iRet=0,pos=0;

//     for(i=1;i<=4;i++)
//     {
//         printf("Enter number:\t");
//         scanf("%d",&value);
//         InsertFirst(&First,&Last,value);
//     }


//     Display(First,Last);

//     iRet=Count(First,Last);
//     printf("Count is :%d",iRet);

//     for(i=1;i<=2;i++)
//     {
//         printf("\nEnter number:\t");
//         scanf("%d",&value);
//         InsertLast(&First,&Last,value);
//     }

//     printf("After inserting at last position\n");
//     Display(First,Last);

//     DeleteFirst(&First,&Last);
//     printf("After deleting first position\n");
//     Display(First,Last);

//     DeleteLast(&First,&Last);
//     printf("After deleting last position\n");
//     Display(First,Last);

//     printf("Enter position for inserrt:\t");
//     scanf("%d",&pos);

//     printf("\nEnter number:\t");
//     scanf("%d",&value);
//     InsertAtPos(&First,&Last,value,pos);

//     printf("\nAfter inserting at position\n");
//     Display(First,Last);

//     printf("\nEnter position for Delete:\t");
//     scanf("%d",&pos);
//     DeleteAtPos(&First,&Last,pos);

//     printf("\nAfter deleting at position\n");
//     Display(First,Last);
//     return 0;
// }

int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;
    int value=0,i=0,iRet=0,pos=0,Choice=1;
    printf("---------------------------Nitiraj--------------------------\n");
    printf("\n1.Insert First");
    printf("\n2.Insert Last");
    printf("\n3.Delete First");
    printf("\n4.Delete Last");
    printf("\n5.Insert At Position");
    printf("\n6.Delete At Position");
    printf("\n7.Display");
    printf("\n8.Count");
    printf("\n0.Exit");

    while(Choice!=0)
    {   
        
        printf("\nEnter Your Choice:\t");
        scanf("%d",&Choice);
        switch(Choice)
        {
            case 1:
                printf("\nEnter Number:\t");
                scanf("%d",&value);
                InsertFirst(&First,&Last,value);
                break;

            case 2:
                printf("\nEnter Number:\t");
                scanf("%d",&value);
                InsertLast(&First,&Last,value);
                break;

            case 3:
                DeleteFirst(&First,&Last);
                break;

            case 4:
                DeleteLast(&First,&Last);
                break;

            case 5:
                printf("\nEnter Number:\t");
                scanf("%d",&value);
                printf("\nEnter position for insertion:\t");
                scanf("%d",&pos);
                InsertAtPos(&First,&Last,value,pos);
                break;

            case 6:
                printf("\nEnter position for delete:\t");
                scanf("%d",&pos);
                DeleteAtPos(&First,&Last,pos);
                break;

            case 7:     
                Display(First,Last);
                break;
            
            case 8:
                printf("Count is:%d",Count(First,Last));
                break;
            case 0:
                printf("Thank you for using our application...");
                break;
            default:
                printf("Error-Invalid input...");
        }

    }
    return 0;
}
// int main()
// {
//     PNODE First = NULL;
//     PNODE Last = NULL;
    
//     int choice = 1, no = 0, pos = 0;
    
//     printf("-----------------------------\n");
//     printf("\nMarvellous Infosystems\n");
//     printf("Singly Circular Linked List\n");
//     printf("-----------------------------\n");
    
//     while(choice!= 0)   // terminates when coice variable contains 0
//     {
//         printf("-----------------------------\n");
//         printf("Enter your choice : \n");
//         printf("1: Inser first\n2: Insert Last\n3: Insert at position \n4: Delete first: \n5: Delete Last\n");
//         printf("6: Delete at position \n7: Display \n8: Count: \n0: Exit\n");
//         scanf("%d", &choice);
//         printf("-----------------------------\n");
        
//         switch(choice)
//         {
//             case 1:
//                 printf("Enter number : \n");
//                 scanf("%d",&no);
//                 InsertFirst(&First, &Last,no);
//                 break;
                
//             case 2:
//                 printf("Enter number : \n");
//                 scanf("%d",&no);
//                 InsertLast(&First, &Last,no);
//                 break;
                
//             case 3 :
//                 printf("Enter number : \n");
//                 scanf("%d",&no);
//                 printf("Enter position : \n");
//                 scanf("%d",&pos);
//                 InsertAtPos(&First, &Last,no,pos);
//                 break;
                
//             case 4:
//                 DeleteFirst(&First, &Last);
//                 break;
                
//             case 5 :
//                 DeleteLast(&First,&Last);
//                 break;
                
//             case 6:
//                  printf("Enter position : \n");
//                  scanf("%d",&pos);
//                  DeleteAtPos(&First, &Last,pos);
//                  break;
                
//             case 7:
//                 Display(First, Last);
//                 break;
                
//             case 8:
//                 printf("Number of node are %d\n", Count(First, Last));
//                 break;
                
//             case 0:
//                 printf("Thank you for using the application...\n");
//                 break;
                
//             default:
//                 printf("Error : Wrong choice..\n");
//         }
//     }
    
//     return 0;
// }