
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


void displayR(PNODE head)
{
   

    if(head != NULL)
    {
       
        displayR(head->next);
        printf("| %d | ->", head->data);
        
    }
   
}
int CountR(PNODE head)
{
    static int iCnt = 0;
    while (head != NULL)
    {
       iCnt++;
       CountR(head ->next);
    }
   return iCnt;
}
int main ()
{
    struct node *First = NULL;

    int iRet = 0;



    InsertFirst(&First, 151);
    InsertFirst(&First, 121);
    InsertFirst(&First, 111);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    displayR(First);
    iRet = CountR(First);

    printf("number of nodes are :%d \n",iRet);
        return 0 ;
}
