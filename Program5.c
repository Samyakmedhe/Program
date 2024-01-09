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
typedef struct node* PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

}

void InsertLast(PPNODE Head, int no)
{
    
}

void DeleteFirst(PPNODE Head, int no)
{
    
}
void DeleteLast(PPNODE Head, int no)
{
    
}
void InsertAtPos(PPNODE Head, int no, int Pos)
{
    
}

void DeleteAtPos(PPNODE Head,int no , int Pos)
{

}

int main()
{
    PNODE first = NULL;

    return 0;
}





#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node* PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;
    
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    

}
int main()
{
    PNODE first = NULL;

    return 0;
}


