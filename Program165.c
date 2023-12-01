
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}


void display(PNODE head)
{
    printf("element of linked list \n");

    while (head != NULL)
    {
       printf("| %d | ->", head->data);
       head = head -> next;
    }
    printf("NULL \n");
}
void Count(PNODE head)
{
    int iCnt = 0;
    while (head != NULL)
    {
       iCnt++;
       head = head -> next;
    }
   return iCnt;
}
int main ()
{
    struct node *First = NULL;

    int iRet = 0;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    display(First);
    iRet = Count(First);

    printf("number of nodes are :%d \n",iRet);
        return 0 ;
}
