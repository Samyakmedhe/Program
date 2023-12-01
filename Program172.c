#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}
void Insertlast(PPNODE Head, int no)
{
    PNODE temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp ->next != NULL)
        {
            temp = temp ->next;
        }
        temp->next = newn;
        
    }
}

void display(PNODE head)
{
    printf("element of linked list \n");

    while (head != NULL)
    {
       printf("| %d | -> ", head->data);
       head = head -> next;
    }
    printf("NULL \n");
}
    
int  Count(PNODE Head)
{
   int iCnt = 0;

    while (Head != NULL)
    {
       iCnt++;
       Head = Head->next;
    }
    return iCnt;
}    

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return ;
    }
    else if ((*Head)-> next == NULL )
    {
        free(*Head);
        *Head = NULL;

    }
    else
    {
        *Head = (*Head) -> next;
        free(temp);
    }
}
void Deletelast(PPNODE Head)
{
    PNODE temp = * Head;
    if(*Head == NULL)
    {
        return ;
    }
    else if ((*Head)-> next == NULL )
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp -> next = NULL;
    }
}
void  InsertAtPos(PPNODE Head , int no , int iPos)
{

    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;

    
    if(( iPos < 1) ||(iPos > Size+1))
    {
        printf("Invalid position\n");
    }

    if(iPos == 1)
    {
        InsertFirst(Head ,no);
    }
    else if(iPos == Size + 1)
    {
        Insertlast(Head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE)); 
        newn->data = no;
        newn->next = NULL;
        for(i =1; i < iPos - 1;i++)
        {
            temp = temp ->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
void  DeleteAtPos(PPNODE Head , int iPos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    PNODE targatedNODE = NULL;
    int i = 0;

    if(( iPos < 1) ||(iPos > Size))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
       DeleteFirst(Head);
    }
    else if(iPos == Size )
    {
        Deletelast(Head);
    }
    else
    {
       for(i = 1;i <iPos - 1;i++)
       {
        temp = temp-> next;
       } 
        targatedNODE = temp -> next;
        temp->next = temp->next->next;
        free(targatedNODE);
    }
}
int main ()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Insertlast(&First,121);
  
     
   

    DeleteAtPos(&First,5);
    display(First);
    iRet = Count(First);
    
    printf("Number of nodes are : %d\n",iRet);
    return 0;

}