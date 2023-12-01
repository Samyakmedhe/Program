#include<iostream>
using namespace std;
class hello
{
    public:
    void display ();    
};
class demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        demo()
        {
            i = 10;
            j = 20;
            k = 30;

        }    
    friend void hello::display ();    
        
};
void hello::display()
        {
            demo obj;
          std::  cout<<"value of i :"<<obj.i<<"\n";
           std:: cout<<"value of j :"<<obj.j<<"\n";
            std::cout<<"value of k :"<<obj.k<<"\n";
        }

int main ()
{
    hello hobj;
    hobj.display();
    
    return 0 ;

}