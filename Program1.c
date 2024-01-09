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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn-> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("contents of linked list :\n");
    while (Head != NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
} 
int count( PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
    
}
int main ()
{
  PNODE first = NULL;
 int iRet = 0;

 InsertFirst(&first,101);
 InsertFirst(&first,51);
 InsertFirst(&first,21);
 InsertFirst(&first,11);
 
 Display(first);
 iRet = count(first);
 printf("Number of Node are : %d\n",iRet);

    return 0;

}