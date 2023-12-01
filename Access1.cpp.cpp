#include<iostream>
using namespace std ;
 
class base
{
    public :
        int i,j,k;
};

class derived: public base
{
    public:
        int a,b;
        void Gun ()
        {
            cout<<"inside derived Gun\n";

;
        }
};



int main ()
{
   base bobj;
   derived dobj;
   
     cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(bobj)<<"\n";

    bobj.fun();
    dobj.fun();
    dobj.Gun();
    return 0 ;

}