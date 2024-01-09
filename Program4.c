#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head= newn;
    }
    else
    {
        newn ->next = *Head;
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
            temp = temp->next;
        }
        temp->next = newn;
        
    }

}
void Display(PNODE Head)
{
    printf("elment of Lisked lsit :\n");
    while(Head != NULL)
    {
        printf(" | %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
    
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
       *Head= (*Head) ->next;
       free(temp);
    }
}


void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if (*Head == NULL)
    {
        return ;
    }
    else if((*Head) ->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free (temp -> next);
        temp -> next = NULL;
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

    Display(First);
    iRet = Count(First);

    printf("number of nodes are : %d\n",iRet);

    Insertlast(&First,121);
    Insertlast(&First,151);
    
    Display(First);
    iRet = Count(First);

    printf("number of nodes are : %d\n",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("number of nodes are : %d\n",iRet);

     DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("number of nodes are : %d\n",iRet);

    return 0;
}
