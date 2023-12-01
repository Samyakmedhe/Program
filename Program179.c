#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct  node *next;
    struct node *prev; 
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }

    

}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp-> next;
        }
        temp->next = newn;
        temp->prev = newn;
    }
}



void DeleteFirst(PPNODE Head)
{
    if(*Head ==NULL)
    {
    return;
    }
    else if(((*Head)-> next == NULL) && ((*Head)->prev == NULL))
    {
        free(*Head);
        *Head = NULL;

    }
    else
    {   
        (*Head) =( *Head) -> next;
        free((*Head)-> prev );
        (*Head)-> prev = NULL;
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head ==NULL)
    {
    return;
    }
    else if(((*Head)-> next == NULL) && ((*Head)->prev == NULL))
    {
        free(*Head);
        *Head = NULL;
        
    }
    else
    {
        while(temp -> next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    } 
}



void Display(PNODE Head)
{
    printf("contents of LinkedList are : \n");

    printf("NULL <=>");
    while(Head != NULL)
    {
    printf(" | %d | <=>",Head->data);
        Head = Head ->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt= 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head ->next;
    }
    return iCnt;
}
void DeleteAtPos(PPNODE Head, int no ,int iPos)
{
     int Size = 0 , i = 0;
    Size = Count(*Head);
    PNODE temp = *Head;

    if ((iPos < 1 ) || (iPos > (Size)))
    {
        printf("Invalid Position \n ");
        return;
    }
    if(iPos == 1)
    {
       DeleteFirst(Head);
    }

    else if (iPos == Size)
    {
       DeleteLast(Head);
    }
    else
    {
        for(i = 1; 1 < iPos-1; i++)
        {
            temp = temp -> next;
        }
        temp -> next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev= temp;

    }
    
}
void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int Size = 0 , i = 0;
    Size = Count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;

    if ((iPos < 1 ) || (iPos > (Size+ 1)))
    {
        printf("Invalid Position \n ");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head , no);
    }

    else if (iPos == Size+1)
    {
        InsertLast(Head , no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn ->data = no;
        newn -> next = NULL;
        newn -> prev = NULL; 

        for(i = 1; 1 < iPos-1; i++)
        {
            temp = temp -> next;
        }
        newn->next = temp -> next;
        temp->next->prev = newn;
        temp-> next = newn;
        newn->prev = temp;
    }
    
}

int main ()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
    Display(first);
    iRet = Count(first);

    printf("Numeber of element are : %d\n",iRet);

    InsertLast(&first,101);
    InsertLast(&first,121);
     InsertLast(&first,151);

    Display(first);
    iRet = Count(first);

    printf("Numeber of element are : %d\n",iRet);

    InsertAtPos(&first, 105 ,5);
    Display(first);
    iRet = Count(first);


    printf("Numeber of element are : %d\n",iRet);

    DeleteAtPos(&first,105,5);
    Display(first);
    iRet = Count(first);
    

    printf("Numeber of element are : %d\n",iRet);


    DeleteFirst(&first);
    Display(first);
    iRet = Count(first);

    printf("Numeber of element are : %d\n",iRet);

   

    DeleteLast(&first);
    Display(first);
    iRet = Count(first);

    printf("Numeber of element are : %d\n",iRet);
   

    return 0;
}