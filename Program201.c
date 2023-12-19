#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head , PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
         newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
         
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;

   
}
void InsertLast(PPNODE Head , PPNODE Tail,int no)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
       newn->prev = *Tail;
       (*Tail)->next = newn;
       *Tail = newn;
        
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
   
}


int DeleteFirst(PPNODE Head , PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if( *Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)-> next;
        free((*Tail)->next);
         (*Head)->prev = *Tail;
        (*Tail)->next = *Head;



      
    }
   

}

int DeleteLast(PPNODE Head , PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if( *Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev ;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    
    }
}


void Display(PNODE Head , PNODE Tail)
{

    printf("element of linkedlist :");
    if((Head != NULL) &&(Tail != NULL))
    {
       do
       {
        printf(" | %d | -> ",Head->data);
        Head = Head->next;
       } while (Head != Tail->next);
        
    }

  
}

int count(PNODE Head , PNODE Tail)
{
    int iCnt = 0;
     if((Head != NULL &&Tail != NULL))
    {
       do
       {
        iCnt++;
        Head = Head->next;
       } while (Head != Tail->next);
        
    }
    return iCnt ;

    
}    
void InsertAtPos(PPNODE Head , PPNODE Tail,int no, int iPos)
{
    int Size = 0 , i = 0;
  
    PNODE newn = NULL;
    PNODE temp = *Head;
    Size = count(*Head , *Tail);
    if((iPos < 1 )|| (iPos > Size+1))
    {
        printf("Invalid position\n");
        return 0;
    }
    if(iPos == 1)
    {
        InsertFirst(Head , Tail, no);
        
    }
    else if(iPos == Size + 1)
    {
        InsertLast(Head , Tail , no);
    }
    else
    {
        newn =(PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1 ; i < iPos-1; i++)
        {
            temp = temp -> next;
        }
        newn ->next = temp -> next;
        temp->next->prev = newn;
        newn->next = newn;
        newn->prev = temp;
    }


}
void DeleteAtPos(PPNODE Head , PPNODE Tail,int iPos)
{
    int Size = 0 , i = 0;
    PNODE newn = NULL;
    PNODE temp = *Head;
    Size = count(*Head , *Tail);
    if((iPos < 1 )|| (iPos > Size))
    {
        printf("Invalid position\n");
        return ;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head , Tail);
        
    }
    else if(iPos == Size + 1)
    {
       DeleteLast(Head , Tail );
    }
    else
    {
        newn =(PNODE)malloc(sizeof(NODE));

        for(i = 1 ; i < iPos-1; i++)
        {
            temp = temp -> next;
        }
        temp->next = temp -> next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }


}
int main ()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;
    
    InsertFirst(&first,&last, 51);
    InsertFirst(&first,&last, 21);
    InsertFirst(&first,&last, 11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);

    Display(first,last);
    iRet = count(first,last);
    printf("\nnumber of linkedlist : %d \n",iRet);
    
    InsertAtPos(&first,&last ,105,5);
    Display(first,last);
    iRet = count(first,last);
    printf("\nnumber of linkedlist : %d \n",iRet);

    DeleteAtPos(&first,&last,5);
    Display(first,last);
    iRet = count(first,last);
    printf("\nnumber of linkedlist : %d \n",iRet);

    DeleteFirst(first,last);
    Display(first,last);
    iRet = count(first,last);
    printf("\nnumber of linkedlist : %d \n",iRet);

    DeleteLast(first,last);
    Display(first,last);
    iRet = count(first,last);
    printf("\nnumber of linkedlist : %d \n",iRet);

    return 0;

}
