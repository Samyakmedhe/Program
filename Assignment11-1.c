#include<stdio.h>


int  DisplayDigit (int ino)
{
    
    int iDigit = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    while(ino!= 0)
    {
        iDigit =  ino % 10;
        printf("%d\n",iDigit);

        ino = ino /10 ;
        
    }

}
int main ()
{
    int ivalue = 0;
    
    printf("enter number\n");
    scanf("%d",&ivalue);

    DisplayDigit(ivalue);


   
    return 0;

}