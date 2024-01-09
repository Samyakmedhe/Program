#include<iostream>
using namespace std;


int Addition(int Arr[] , int Length)
{
    int Sum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < Length ; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}
int main ()
{
    int Size = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int Ret  = 0;
    cout<<"Enter the Number of Element :"<<"\n";
    cin>>Size;

    ptr = new int [Size];

    cout<<"Enter the elements :"<<"\n";
    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Ret = Addition(ptr,Size);

    cout<<"Addition of All element is  :"<<Ret<<"\n";


    
    delete[]ptr;

    return 0;
}