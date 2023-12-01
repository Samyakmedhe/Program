#include<iostream>
using namespace std;


class Number
{
    private :
        int ino;


    public:
        Number(int x)
        {
            ino = x;
        }

    int Factorial()
    {
        int iCnt = 1 , iFact = 1;
        for(iCnt = 1; iCnt <= ino; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
};


int main ()
{
   int iValue = 0;
   int iRet = 0;

   cout<<"enter numnber :"<<endl;
   cin>>iValue;

    Number *nobj = new Number(iValue);
    iRet = nobj->Factorial();

    cout<<"factorial is "<<iRet<<endl;

    delete nobj;
    return 0;
}