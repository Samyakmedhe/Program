#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyCL
{
    private :
        struct node <T>* first;
        struct node <T>* last;
        int Count;

    public:
        DoublyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no , int ipos);
        void DeleteAtPos(int ipos);
};

template <class T>
DoublyCL<T>::DoublyCL()      
{
    cout<<"Inside constructor\n";
    first = NULL;
    Count = 0;
}

template <class T>
void DoublyCL<T>::InsertFirst(T no)
{
    struct node<T>* newn = NULL;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

if((first == NULL) &&(last == NULL))
{
    first = newn;
    last = newn;
}
else
{
    newn->next = first;
    first->prev = newn;
    first = newn;
}
    last->next = first;
    first->prev = last;
Count++;
}

template <class T>
void DoublyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    struct node<T>* temp = first;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((first == NULL) &&(last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
       newn->prev = last ;
       last -> next = newn;
       last = newn;
    }
    Count++;
}

template <class T>
void  DoublyCL<T>::Display()
{
    struct node<T>* temp = first;
    cout<<"Element of the linkedlist are :\n";

    while (temp != NULL  && last != NULL)
    {
        cout<<"| "<<temp->data<<" | ->";
        temp = temp ->next;
    }
cout<<"NULL\n";
}

template <class T>
int DoublyCL<T>::CountNode()
{
    return Count;
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if((first->next == NULL) &&(first -> prev == NULL))
    {
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T>* temp = first;

        first = first -> next;
        delete(first -> prev);
        first -> prev = NULL;

    }
    Count--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{

    if(first == NULL)
    {
        return;
    }
    else if((first->next == NULL) && (first -> prev == NULL))
    {
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T>* temp = first;
       while (temp->next->next != NULL)
       {
            temp = temp ->next;
       }
       delete temp->next;
       temp->next = NULL;
       
    }
    Count--;
}

template <class T>
 void DoublyCL<T>::InsertAtPos(T no , int ipos)
{
        if((ipos < 1)||(ipos > Count+1))
        {
            return;
        }
        if(ipos == 1)
        {
            InsertFirst(no);
        }    
        else if(ipos == Count+1)
        {
            InsertLast(no);
        }
        else
        {
            struct node<T>* newn = new struct node<T>;
            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            struct node<T>* temp = first;
            int i =0;
            for(i = 1 ; 1 < ipos-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next->prev = newn;
            temp->next = newn;
            newn->prev = temp;
            
            Count++;
        }

    
    }

 template <class T>
void DoublyCL<T>::DeleteAtPos(int ipos)
{
     if((ipos < 1)||(ipos > Count+1))
        {
            return;
        }
        if(ipos == 1)
        {
            DeleteFirst();
        }    
        else if(ipos == Count+1)
        {
            DeleteLast();
        }
        else
        {
           struct node<T>* temp = first;
            int i =0;
            for(i = 1 ; 1 < ipos-1; i++)
            {
                temp = temp->next;
            }
            struct node<T>* targatednode = temp->next->prev;
            temp->next = temp->next->next;
            delete targatednode;

            Count--;
        }
    
}
int main()
{
    DoublyCL<int> iobj;
    DoublyCL<float> fobj;
    DoublyCL<double> dobj;
    DoublyCL<char> cobj;

    
    iobj.InsertFirst(101);
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    
    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();

  
    fobj.InsertFirst(101.9);
    fobj.InsertFirst(51.99);
    fobj.InsertFirst(21.99);
    fobj.InsertFirst(11.99);
    
     fobj.InsertFirst(11.99);
    fobj.InsertFirst(21.99);
    fobj.InsertFirst(51.99);
    fobj.InsertFirst(101.9);

    cout<<"LinkedList of float : "<<"\n";
    fobj.Display();

    dobj.InsertFirst(101.9999);
    dobj.InsertFirst(51.9999);
    dobj.InsertFirst(21.9999);
    dobj.InsertFirst(11.9999);
    

    cout<<"LinkedList of double : "<<"\n";
    dobj.Display();

    cobj.InsertFirst('D');
    cobj.InsertFirst('C');
    cobj.InsertFirst('B');
    cobj.InsertFirst('D');
    
   
    cout<<"LinkedList of Charaters : "<<"\n";
    cobj.Display();
    return 0;
}