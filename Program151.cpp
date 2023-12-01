#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iSize;
    public:
        Array(int X)
        {
            iSize = X;
            Arr = new int [iSize];
        }
        ~Array()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt =0;
            cout<<"please enter the element :"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void dislpay()
        {
            cout<<"elements of the Array are :"<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize ;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }

};

int main ()
{
    int iLength = 0;
    
    cout<<"enter the number of elment that you want to store :"<<endl;
    cin>>iLength;

    Array * aobj = new Array(iLength);

    aobj->Accept();
    aobj->dislpay();

    delete aobj;

    return 0;
}
