#include<iostream>
using namespace std ;

class demo 
{
        public :
            int i ;
            int j ;
            int k ;
            
            demo (int a= 10, int b = 20 , int c = 30 )
            {
                cout<<"value of this is : "<<this<<"\n";

                this -> i = a;
                this ->j =b;
               
                
               this -> k =c;

            }

            void Fun (int no1, int no2)
            {
                cout<<"inside fun \n";
                
            }
            void display ()
            {
               cout<<"inside display \n"; 
        
            }





};





int main ()
{

    demo obj1;
    demo obj2(11,21,51);

    obj1.Fun(5,6);
    obj2.Fun(8,9);

cout<<"address of obj 1 is "<<&obj1<<"\n";


    obj1.display ();
cout<<"address of obj2 is "<<&obj2<<"\n";

    obj2.display ();


    

    return 0 ;
}