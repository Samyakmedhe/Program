#include<iostream>
using namespace std;


class String
{
    private:
        char *str;
        int iSize;
    public:
        String()
        {
            iSize = 20;
            str = new char[iSize];
        }

        String(int X)
        {
            iSize = X;
            str = new char[iSize];
        }
        ~String()
        {
            delete []str;
        }

        void Accept()
        {
            cout<<"enter the String :"<<endl;
            cin.getline(str,iSize);
        }

        void display()
        {
            cout<<"String is :"<<str<<endl;
        }



};

int main ()
{
    String  *sobj1 = new String(30);
    String  *sobj1 = new String(30);
    sobj1->Accept();
    sobj1->display();

delete sobj1;
return 0;
}
