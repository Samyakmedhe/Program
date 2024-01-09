#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
    private :
        struct node <T>* first;
        struct node <T>*last;
        int Count;

    public:
        SinglyCL();
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
SinglyCL<T>::SinglyCL()      
{
    cout<<"Inside constructor\n";
    first = NULL;
    Count = 0;
}

template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct node<T>* newn = NULL;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
  

if((first == NULL) && (last == NULL))
{
    first = newn;
    last  = newn;
}
else
{
    newn->next = first;
    first = newn;
}
Count++;
}

template <class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    struct node<T>* temp = first;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
        last ->next = first;
    }
    else
    {
        last->next = newn;
        last = newn;
        

    }
    Count++;
}

template <class T>
void  SinglyCL<T>::Display()
{
    struct node<T>* temp = first;
    cout<<"Element of the linkedlist are :\n";

    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" | ->";
        temp = temp ->next;
    }
cout<<"NULL\n";
}

template <class T>
int SinglyCL<T>::CountNode()
{
    return Count;
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if((first == NULL) &&( last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last  = NULL;
    }
    else
    {
        struct node<T>* temp = first;
       
        first = first ->next;
        delete last -> next;
        last -> next = first;

    }
    Count--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T>* temp = first;
        while (temp->next != last)
        {
           temp = temp-> next;
        }
       delete last;
       last = temp;
       last->next = first;
       
    }
    Count--;
}

template <class T>
 void SinglyCL<T>::InsertAtPos(T no , int ipos)
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

            struct node<T>* temp = first;
            int i =0;
            for(i = 1 ; 1 < ipos-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next = newn;
            
            Count++;
        }

    
    }

 template <class T>
void SinglyCL<T>::DeleteAtPos(int ipos)
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
            struct node<T>* targatednode = temp->next;
            temp->next = temp->next->next;
            delete targatednode;

            Count--;
        }
    
}
int main()
{
    SinglyCL<int> iobj;
    SinglyCL<float> fobj;
    SinglyCL<double> dobj;
    SinglyCL<char> cobj;

    iobj.InsertFirst(11);
    iobj.InsertFirst(21);
    iobj.InsertFirst(51);
    iobj.InsertFirst(101);
    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();

    fobj.InsertFirst(11.99);
    fobj.InsertFirst(21.99);
    fobj.InsertFirst(51.99);
    fobj.InsertFirst(101.9);

    cout<<"LinkedList of float : "<<"\n";
    fobj.Display();


    dobj.InsertFirst(11.9999);
    dobj.InsertFirst(21.9999);
    dobj.InsertFirst(51.9999);
    dobj.InsertFirst(101.9999);

    cout<<"LinkedList of double : "<<"\n";
    dobj.Display();

    cobj.InsertFirst('A');
    cobj.InsertFirst('B');
    cobj.InsertFirst('C');
    cobj.InsertFirst('D');

    cout<<"LinkedList of Charaters : "<<"\n";
    cobj.Display();

    return 0;
}