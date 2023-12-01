#include<iostream>
using namespace std;
class demo 
{
    public:
     int i ;
     int j ;

     void fun ()
     {

        cout<<"bhim print on screen...\n";

     }



};

int main ()
{
    demo obj1 ;
    demo obj2 ;

    obj1.i = 10;
    obj1.j = 20;

    obj2.i = 30;
    obj2.j = 40;

    obj1. fun ();
    obj2.fun ();


    return 0;

}