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

void Push(PPNODE Head , int no)
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
        newn->next= *Head; 
        *Head = newn;
    }
}

int Pop(PPNODE Head)
{
    int value = 0;
    PNODE temp = NULL;
    if(*Head == NULL)
    {
        printf("Stack is empty...");
        return value;
    }
    else
    {
        value = (*Head)->data;
        *Head = (*Head)->next;
        free(temp);

    }
    return value;

}

int Display(PNODE Head)
{
    printf("number of Stack :\n");
    while( Head !=  NULL)
    {
        printf("| %d |\n",Head->data);
        Head = Head->next;
    }
}

int main ()
{
    PNODE first = NULL;
    int iRet = 0;

    Push(&first,101);
    Push(&first,51);
    Push(&first,21);
    Push(&first,11);

    Display(first);
    iRet =Pop(&first);
    printf("Poped element is : %d\n",iRet);

    iRet =Pop(&first);
    printf("Poped element is : %d\n",iRet);

    iRet =Pop(&first);
    printf("Poped element is : %d\n",iRet);

     iRet =Pop(&first);
    printf("Poped element is : %d\n",iRet);

    return 0;

}





