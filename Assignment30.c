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

int DisplayPerfect(PNODE Head)
{
    int i = 0;
    int rem = 0;
    int isum = 0;

    while(i < rem)
    {
        if(rem % 1 == 0)
        {
            isum +=1;
            i++;
        }
    }
   
   
}

int DisplayPrime(PPNODE Head)
{
    int i = 0, j = 0, iCnt = 0, n =0;

    for ( i = 0; i <= i  ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            if( i % j == 0)
            {
                iCnt++;
            }
            if(iCnt == 2)
            {
                printf("%d\t",i);
            }
        }
    }
    
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
    
    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

    display(first);
    iRet = Count(first);
    printf("number of element :%d\n",iRet);

    
    DisplayPerfect(first);
    iRet = Count(first);
    printf("number of element :%d\n",iRet);

    DisplayPrime(first);
    iRet = Count(first);
    printf("number of element :%d\n",iRet);

        return 0;
}