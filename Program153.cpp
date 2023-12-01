
#include<iostream>
using namespace std;

class Pattern
{
    private:
        int irow;
        int icol;

    public:
        Pattern(int X, int Y)
        {
            irow = X;
            icol = Y;
    
        }    
        void display()
        {
            int i =0;
            int j = 0;
            for(i = 1;i<= irow;i++)
            {
                for(j = 1 ;j<= icol; j++)
                {
                if(i== j)
                { cout<<"$\t";}
                 else if((i == 1)||(i == irow) ||(j = 1) || (j == icol))
                { cout<<"*\t";}
                else if(i >j)
                {cout<<"0\t";}
                else if( i< j)
                {cout<<"1\t";} 
                   
                }
                cout<<endl;
            }
           
        }
};

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"enter number of rows:"<<endl;
    cin>>iValue1;

    cout<<"enter number of colum:"<<endl;
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1,iValue2);
    pobj->display();

    delete pobj;
    return 0;
}
