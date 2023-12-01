#include<iostream>
using namespace std;
class demo 
{
    public :
        int x,y ;

        demo ()
        {
            cout<<"inside demo constructor\n";
            x= 10;
            y= 20 ;

        }
        ~demo ()
        {

            cout<<"inside demo destructor\n";

        }
        void Fun()
        {

            cout<<"inside fun of demo \n";


        }
};
class hello : public demo 
{
    public :
        int a,b, ;
        hello ()
        {
            cout<<"inside hello constructor\n";
            a = 30 ;
            b = 40 ;
            

        }
        ~hello ()
        {

            cout<<"inside hello destructor\n";
        }
        void gun ()
        {

            cout<<"inside gun of  hello \n";
        }
    

};

class Marvellous : public hello ,public demo
{
    public :
        int p ;

        Marvellous ()
        {
            cout<<"inside constructor of Marvellous \n";
            p = 60;
        }
        ~Marvellous ()
        {
            cout<<"inside destructor of Marvellous \n";

        }
        void sun ()
        {
            cout<<"inside sun of Marvellous \n";

        }
};
int main ()
{
     Marvellous mobj ;

    cout<<sizeof(mobj)<<"bytes \n";

    
    mobj.Fun ();
    mobj.gun();
    mobj.sun ();


    return 0;
}
