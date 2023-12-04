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
typedef struct node** PPNODE;

void Insertfirst(PPNODE Head , PPNODE Tail,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
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

void insertlast(PPNODE Head , PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc (sizeof(NODE));
    newn->data =no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
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
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;

}
void Deletefirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {   
        free(*Head);
        *Head = NULL;
        *Tail = NULL;

    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) &&(*Head == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;

    }
    else
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next);
         (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
       
    }
    
}
void Display(PNODE Head , PNODE Tail)
{
    printf("Number of doubly linked list : ");
    if((Head != NULL)&&( Tail != NULL))
    {
        do
        {
            printf(" | %d | -> ",Head->data);
            Head = Head->next;
            
        } while (Head != Tail ->next);
        
    }
   
}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt= 0;
    if((Head != NULL) && (Head != NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head != Tail ->next);
        
    }
    return iCnt;
}
int main () 
{

    PNODE  first = NULL;
    PNODE last = NULL;
    int iRet = 0;

    Insertfirst(&first, &last,101);
    Insertfirst(&first,&last,51);
    Insertfirst(&first,&last,21);
    Insertfirst(&first,&last,11);


    insertlast(&first,&last,111);
    insertlast(&first,&last,121);
   

    Display(first , last);
    iRet = Count(first,last);
    printf("\ntotal number of linkedlist : %d\n ",iRet);

    Deletefirst(&first,&last);
    Display(first , last);
    iRet = Count(first,last);
    printf("\ntotal number of linkedlist : %d\n",iRet);

    DeleteLast(&first,&last);
     Display(first , last);
    iRet = Count(first,last);
    printf("\ntotal number of linkedlist : %d\n",iRet);


    return 0;
}