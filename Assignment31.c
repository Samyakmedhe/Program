#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insertfirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
int Rerverse(Head)
{
    int i = 0,  j = 0;
    while(Head != NULL )
    {
        j = Head % 10;
        i = i * 10 + j;
        Head = Head /10;
        
    }
    return i;
}
void Reverse(PNODE Head)
{
    if(Head == NULL)
    {
        return;
    }
    while(Head != NULL)
    {
        Head->data = reverse(Head->data);
        Head = Head->next;
    }
}
int Display(PNODE Head )
{
    printf("content of LinkedList : ");
    while(Head != NULL)
    {
        printf(" | %d |->",Head->data);
        Head = Head ->next;
    }  
    printf("NULL\n");  
}
int main ()
{
    PNODE first = NULL;
    int iRet = 0;

    Insertfirst(&first,101);
    Insertfirst(&first,51);
    Insertfirst(&first,21);
    Insertfirst(&first,11);

    Display(first);
    reverse(first);
    printf("");

    return 0;
}
