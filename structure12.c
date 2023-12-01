#include<stdio.h>

union demo

{
 
    int i ;
    char ch;
    float f ;
    
   double  d ;

};

int main ()
{

union demo   obj;
    printf("size of object is :%d",sizeof(obj));
    obj.f = 90.99;
    printf("%d",obj.f);

    obj.i = 11;
    printf("%d",obj.i);

    return 0;
}