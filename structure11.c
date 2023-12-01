#include<stdio.h>
# pragma pack (1)
struct demo 
{
 
    int i ;
    char ch;
    float f ;
    
   double  d ;

};

int main ()
{

    struct demo  obj;
    printf("size of object is :%d",sizeof(obj));

    return 0;


}