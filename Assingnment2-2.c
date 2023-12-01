#include<stdio.h>

void display (int ino)
{
    while(ino>0)
    {
        printf("*");
        ino--;
    }
}
int main ()
{

    int ivalue = 0;
    printf("enter number");
    scanf("%d",&ivalue);
    display(ivalue);

    return 0 ;

}