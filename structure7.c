#include<stdio.h>

struct demo 
{
    int  i;
    float f ;
    struct Hello
    {
        int no ;
        float d ;

    };

};

int main ()

{
    struct  demo dobj ;
    
    
     
     printf("size of object is :%d\n",sizeof(dobj));
    
    return 0;

}