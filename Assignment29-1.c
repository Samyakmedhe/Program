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
        newn ->next = *Head;
        *Head = newn;
    }
}
int Addition(PNODE Head)
{
    int isum = 0;
    while(Head)
    {
        isum = isum + Head->data;
        Head = Head->next;

    }
    return isum;
}

int Maximum(PNODE Head)
{
    
    int iMax = 0;
    while (Head != NULL)
   {
         if(iMax < Head->data)
         {
            iMax = Head->data;
            Head = Head->next;
        }
        
    }
    return iMax;
}
int Minimum(PNODE Head)
{
    int iMim = 0;
    while(Head != NULL)
    {
        if(iMim > Head->data)
        {
            iMim = Head->data;
            Head = Head->next;
        }
    }
    return iMim;
}
void display(PNODE Head)
{
    printf("contents of linkedlist are : \n");

    while ( Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count (PNODE Head)
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
    
    
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    display(first);
    iRet = Count(first);
    printf("number of element :%d\n",iRet);

     display(first);
    iRet = Addition(first);
    printf("Addition of element  :%d\n",iRet);

    
    display(first);
    iRet = Maximum(first);
     printf("maximmum node  :%d\n",iRet);
    
   display(first);
    iRet = Minimum(first);
    printf("mimmum node : %d\n",iRet);
    
        return 0;
}