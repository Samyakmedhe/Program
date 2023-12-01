#include<stdio.h>
void display (int ino)
{
    if (ino<10)
    {
        printf("Hello");
    }
    else
    {
        printf("demo");
    }
    
}
int main ()
{
    int ivalue = 0;

    printf("eneter number ");
    scanf("%d",&ivalue);

    display (ivalue);

    return 0 ;

}