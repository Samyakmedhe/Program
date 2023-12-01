#include<stdio.h>

void displayevenfactor(int ino)
{
    int i = 0;
    if (ino <= 0)
    {
        ino = -ino;
    }
    for(i = 1; i<=5 ;i++)
    {
        if(i &&ino)
        {
            
        }
    }
}
int main ()
{

    int ivalue = 0;

    printf("nter number\n");
    scanf("%d",&ivalue);
    displayevenfactor(ivalue);

    return 0;

}