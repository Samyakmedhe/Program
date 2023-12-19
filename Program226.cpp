#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class SinglyCL
{
    private :
        PNODE first;
        PNODE last;
        int Count;

    public:
        SinglyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no , int ipos);
        void DeleteAtPos(int ipos);
};


SinglyCL::SinglyCL()      
{
    cout<<"Inside constructor\n";
    first = NULL;
    last = NULL;
    Count = 0;
}

void SinglyCL::InsertFirst(int no)
{ 
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;

    }
    else
    {
        newn->next = first;
        first = newn;

    }
    Count++;
}

void SinglyCL::InsertLast(int no)
{}
void  SinglyCL::Display()
{
    PNODE temp = first;
    cout<<"element of the linked list : \n";
    if((first != NULL) && (last != NULL))
    {
        do
        {
            cout<<"| "<<first->next<<" | ->";
            first = first ->next;

        } while (first != last->next);
        
    }
}
int SinglyCL::CountNode()
{
    return Count;
}

void SinglyCL::DeleteFirst()
{}

void SinglyCL::DeleteLast()
{}
 void SinglyCL::InsertAtPos(int no , int ipos)
{}
void SinglyCL::DeleteAtPos(int ipos)
{}
    

int main()
{
    
    SinglyCL obj;

    obj.InsertFirst(121);
    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();


    return 0;
}