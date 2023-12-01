#include<stdio.h>
int main ()
{ 
    int i = 10 ;
    signed int j = 20 ;
    signed int k = -30 ;

    unsigned int a = 40;
    int X = 10;
    short int y = 10;
    long int  z = 20;

    
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",k);
    printf("%d\n",a);

    printf("size of x is :%d\n",sizeof(X));
    printf("size of y is :%d\n",sizeof(y));
    printf ("size of z is :%d\n",sizeof(z));

    return 0;

}