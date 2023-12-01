#include<iostream>
using namespace std;
class base

{
    public :
        int i,j,k;

        void fun ()
        {cout<<"base fun \n";}
        virtual void gun()
        {cout<<"base gun\n";}
        virtual int addition (int no1,int no2) = 0;

};
class derived : public base 
{
    public:
        int a,b;
        void gun()
        {cout<<"derived gun\n";}    
        virtual void sun()
        {cout<<"derived sun\n";}
        int addition (int no1,int no2)
        {
            return no1 + no2;
        }
        

};

int main ()
{
    base bobj;
    
    base *bp = new derived;
    bp->fun();
    bp->gun();
    int ret = 0 ;
    ret = bp->addition (10,11);
    cout<<"addition is :"<<ret<<"\n";

    return 0 ;

}
