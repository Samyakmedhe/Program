#include<stdio.h>

void display(int ino)
{
    int iCnt = 0;
    for(ino= ino;ino>0;ino--)
    {
        printf("*\t");
    }
    
} 
int main ()
{
    int ivalue = 0;

    printf ("enter number ");
    scanf("%d",&ivalue);

    display(ivalue);

    return 0;

}