#include<iostream>
using namespace std ;

class demo 
{
    private :
        int i ;
        int j ;

        void fun ()
        {

            cout<<"inside fun of demo class \n ";

        }
};

int main ()
{
    demo obj1 ;
    demo obj2 ;

    obj1.i = 11;
    obj1.j = 21;

    obj2.i = 10 ;
    obj2.j = 20;

    obj1.fun ();
    obj2.fun ();

    return 0;

}