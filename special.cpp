#include<iostream>
using namespace std ;


class demo
{

    public :
     int i ;
     int j ;
     
     demo ()
     {
        cout<<"inside default constructor\n";
        i = 0;
        j = 0;


     }
     demo (int A,int B)
     {
        cout<<"inside parametrised constructor\n";
        i = A;
        j = B;

     }

     demo (demo &ref)
     {

        cout<<"inside copy constructor\n";
        i = ref. i;
        j = ref. j;

     }

     ~demo()
     {


        cout<<"inside destructor\n";
     }
};



int main ()
{
    demo obj1;
    demo obj2(11,21);
    demo obj3(obj2);


    return 0;

}