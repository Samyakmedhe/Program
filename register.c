#include<stdio.h>

void display ()

{


    register no = 11 ;
    register int i ;
    

    printf("value of no :%d\n",no );
    printf("value is i :%d \n",i);
}

int main ()
{
    display ();
    printf("%d",no);
    
    return 0;

}