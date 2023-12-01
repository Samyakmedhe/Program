#include<iostream>

using namespace std ;


class demo 
{
    public:
    int i ;
    int j ;
    static int K ;

    demo (int a = 10  ,int b = 20)
    {

        i = a;
        j = b;

    }
    void display ()
    {
        cout<<"inside non static method display \n ";
        cout<<"value of i "<<i<<"\n";
        cout<<"value of j "<<j<<"\n";
        cout<<"value of K "<<K<<"\n";
    }
    static void fun ()
    {
        cout<<"inside static method fun  \n ";
        cout<<"value of k "<<K;


    }
};
int demo :: K = 111;

int main ()

{
    cout<<"value of K is :"<<demo ::K<<"\n";
    demo::fun ();

    demo obj1 (11,21);
    demo obj2 (51,101);
    demo obj3 (121,151);

    cout<<"size of object is :"<<sizeof(obj1)<<"\n";
    
    obj1.display ();
    obj2.display ();
    obj3.display ();


    
    return 0;
}

    
