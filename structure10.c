#include<stdio.h>


struct demo
{
    int no ;
    struct  demo *ptr;
    
    
};

int main ()
{
    struct demo obj 1 , obj 2, obj 3;

    obj1.no = 11 ;
    obj2.no = 21;
    obj3.no = 51;

    obj1.ptr = &obj2;
    obj2 .ptr =&obj3;
    obj3. ptr = NULL ;
    
    
    

    return 0;

}