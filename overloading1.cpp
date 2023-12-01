#include <iostream>

using namespace std ;




class demo 
{
    public :

    int addition ( int A , int B)
    {
        int ans = 0 ;

        ans = A+B ;
        return ans ;

    }

    int addition (int A , int B , int C )
    {
        int ans = 0 ;
        ans = A + B + C ;
        return ans ;

    }   
    float addition (float A , float B )

    {
         float ans = 0.0f ;
        ans = A + B ;
        return ans ;


    }

};
int main ()
{

    demo  obj ;

    int i = 10 , j= 20 , k = 30 ;
    int Ret = 0 ;

    Ret = obj.addition (i ,j );
    cout<<"addition is : "<<Ret<<"\n";

    Ret = obj.addition (i ,j, k );
    cout<<"addition is : "<<Ret<<"\n";
    return 0; 
}