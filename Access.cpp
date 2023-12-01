#include<iostream>
using namespace std ;
class demo 
{
        int i ;
    public:
        int j;
    private:
        int k ;
    protected:
        int a;
    public:
        demo ()
        {
            i = 10 ;
            j = 20 ;
            k = 30 ;
            a = 40 ;
        }
        void display ()
        {
            cout<<"value of i : "<<i<<"\n";
            cout<<"value of j : "<<j<<"\n";
            cout<<"value of k : "<<k<<"\n";
            cout<<"value of a : "<<a<<"\n";
        }
};
class hello :public demo 
{
    public:
        void hellodisplay ()
        {
            //cout<<"value of i : "<<i<<"\n";
            cout<<"value of j : "<<j<<"\n";
            //cout<<"value of k : "<<k<<"\n";
            cout<<"value of a : "<<a<<"\n";
        }

};

int main ()
{
    hello hobj;
    hobj.hellodisplay();



    return 0 ;

}