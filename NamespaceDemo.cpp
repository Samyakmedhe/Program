#include<iostream>

using namespace std;

namespace Marvellous
{
    void Display ()
    {
        cout<<"Inside Display of Marvellous \n";
    }
} 

namespace Infosystems
{
    void Display ()
    {
        cout<<"inside Display Of Infosystems\n";
    }
}
int main ()
{

Marvellous::Display();
Infosystems::Display();

    return 0 ;

}