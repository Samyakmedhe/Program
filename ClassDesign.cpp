#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iLength;

    public:
        Array(int Size)
        {
            iLength = Size;
            Arr = new int[iLength];
        }

        ~Array()
        {
            delete[]Arr;
        }
        void Accept()
        {
            int iCnt = 0 ;
            cout<<"enter the element :"<<"\n";
            for(iCnt  = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        
        void Display()
        {
            int iCnt = 0 ;
            cout<<" element of the Array are :"<<"\n";
            for(iCnt  = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";

            }
            cout<<"\n";
        }
};

int main ()
{

    Array aobj(5);
    aobj.Accept();
    aobj.Display();
    return 0 ;
}