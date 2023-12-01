#include<stdio.h>
int main ()
{
    int arr [5] = {11,21,51,101,111};

    int *p = arr;
    
    int *q = & (arr [4]);

    return 0;

}