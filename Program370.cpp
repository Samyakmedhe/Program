#include<iostream>
using namespace std;



int main ()
{
    int Size = 0;
    int *ptr = NULL;
    int iCnt = 0;

    cout<<"Enter the Number of Element :"<<"\n";
    cin>>Size;

    ptr = new int [Size];

    cout<<"Enter the elements :"<<"\n";
    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of Array are :\n";
    for (iCnt  = 0; iCnt < Size; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    cout<<"\n";
    delete[]ptr;

    return 0;
}