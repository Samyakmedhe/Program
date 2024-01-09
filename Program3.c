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

void InsertFirst(PPNODE Head,int no)
{
    PNODE  newn = NULL; 
     newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn ->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int no)
{
    PNODE temp = *Head;

    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn ->next = NULL;

    if(*Head ==NULL)
    {
        *Head = newn ;
    }
    else
    {
     while (temp->next != NULL)
    {
        temp= temp->next;
    }
    temp->next = newn;
    }

  
}
void display(PNODE Head)
{
    printf("element of linked list are :\n");
    while (Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");

}
int Count (PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;

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
    display(First);
    iRet = Count(First);

    printf("number of nodes are : %d\n",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);

     display(First);

    iRet = Count(First);
    printf("number of nodes are : %d\n",iRet);
    return 0;
}