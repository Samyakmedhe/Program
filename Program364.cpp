#include<iostream>
using namespace std;

template <class T>
void Swap( T &No1 , T &No2)
{
    T Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;

}

int main ()
{
    int iValue1 = 10;
    int iValue2 = 20;

    float fValue1 = 10.9;
    float fValue2 = 20.8;

    double dValue1 = 10.0;
    double dValue2 = 20.5;


    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    Swap(iValue1,iValue2);

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";



    cout<<"Value of iValue1 : "<<fValue1<<"\n";
    cout<<"Value of iValue2 : "<<fValue2<<"\n";

    Swap(fValue1,fValue2);

    cout<<"Value of iValue1 : "<<fValue1<<"\n";
    cout<<"Value of iValue2 : "<<fValue2<<"\n";



    cout<<"Value of iValue1 : "<<dValue1<<"\n";
    cout<<"Value of iValue2 : "<<dValue2<<"\n";

    Swap(dValue1,dValue2);

    cout<<"Value of iValue1 : "<<dValue1<<"\n";
    cout<<"Value of iValue2 : "<<dValue2<<"\n";


    return 0;
}