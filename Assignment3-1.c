#include<stdio.h>
void Printeven(int ino1)
{
    int ino = 0;
    if(ino <= 0)
    {
        return;
    }
    for (ino = 1;ino<= 7;ino++)
    {
       if(ino %2 == 0)
     {
        printf("%d",ino);
     }
    }
    
}

int main ()
{
    int ivalue = 0;

    printf("enter number ");
    scanf("%d",&ivalue);

    Printeven (ivalue);
    return 0 ;

}