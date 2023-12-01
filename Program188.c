#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;

}NODE, *PNODE, **PPNODE;

//typedef struct node NODE;
//typedef struct node* PNODE;
//typedef struct node** PPNODE;

void InsertFirst(PPNODE Head ,PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
       
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
  
    }   
      (*Tail)-> next = *Head;
}
    

void InsertLast(PPNODE Head ,PPNODE Tail, int no)
{
     PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
    else
    {
       (*Tail)->next = newn;
       *Tail = newn;
      (*Tail)->next = *Head; 
    }
    
}



void DeleteFirst(PPNODE Head ,PPNODE Tail)
{
    if(*Head == NULL && *Tail == NULL)
    {
        return ;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;   
    }
    else
    {
        (*Head) = (*Head) -> next;
        free((*Tail)->next);
        (*Tail)->next = *Head;

    }
}

void DeleteLast(PPNODE Head ,PPNODE Tail)
{
    PNODE temp = *Head;

    if(*Head == NULL && *Tail == NULL)
    {
        return ;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;   
    }
    else
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);
        *Tail = temp; 
        (*Tail)->next = *Head;
    }
} 



void Display (PNODE Head ,PNODE Tail)
{
    printf("element of Linked list are : \n");
    if((Head != NULL)&&(Tail != NULL))
    {
        do
        {
            printf("| %d | -> ",Head->next);
            Head = Head -> next;

        } while(Head != Tail->next);
        
        printf("address of first node\n");
    }
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
   if((Head != NULL)&&(Tail != NULL))
    {
        do
        {
           iCnt++;
            Head = Head -> next;

        } while(Head != Tail->next);
          
    }
   return iCnt;
}
void InsertAtPos(PPNODE Head ,PPNODE Tail, int no,int iPos)
{
    int size = 0;
    int i = 0;
  
    size = Count(*Head, *Tail);
    PNODE newn = NULL;
      PNODE temp = *Head;

    if((iPos < 1)||(iPos >size+1))
    {
        printf("Invalid Position\n");
        return ;
    }
    if(iPos ==1)
    {
        InsertFirst(Head , Tail, no);
    }
    else if (iPos == size+1)
    {
        InsertFirst(Head , Tail , no);
    }
    else
    {
        newn= (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        for(i = 1 ; i < iPos-1 ; i++)
        {
            temp = temp -> next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
    
}

void DeleteAtPos(PPNODE Head ,PPNODE Tail, int iPos)
{
     int size = 0;
    int i = 0;
    size =Count(*Head, *Tail);
    PNODE temp = *Head;
    PNODE targetatednode = NULL;

    if((iPos < 1)||(iPos >size))
    {
        printf("Invalid Position\n");
        return ;
    }
    if(iPos ==1)
    {
        DeleteFirst(Head , Tail);
    }
    else if (iPos == size)
    {
        DeleteLast(Head ,Tail);
    }
    else
    {

        for(i = 1 ; i < iPos-1 ; i++)
        {
            temp = temp -> next;
        }

        targetatednode = temp->next;
        temp->next = temp->next->next;
        free(targetatednode);
    }
}

int main ()
{
    PNODE first = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&first, &Last,51);
    InsertFirst(&first , &Last,21);
    InsertFirst(&first, &Last,11);

    Display(first,Last);

    iRet = Count(first,Last);
    printf("Number of elements are :%d\n",iRet);

    InsertLast(&first,&Last,101);
    InsertLast(&first,&Last,111);
    InsertLast(&first,&Last,121);

    Display(first,Last);
    iRet = Count(first,Last);
    printf("Number of elements are :%d\n",iRet);

    InsertAtPos(&first,&Last,105,5);
    Display(first,Last);
    iRet = Count(first,Last);
    printf("Number of elements are :%d\n",iRet);

    DeleteAtPos(&first,&Last,5);
    Display(first,Last);
    iRet = Count(first,Last);
    printf("Number of elements are :%d\n",iRet);

    DeleteFirst(&first, &Last);
    iRet = Count(first,Last);
    printf("Number of elements are :%d\n",iRet);

     DeleteLast(&first, &Last);
    iRet = Count(first,Last);
    printf("Number of elements are :%d\n",iRet);
    return 0; 
}