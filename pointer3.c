#include<stdio.h>
int main ()

{   


    int no = 21 ;
    int *p = &no ;
    int **a =&no ;
    int **q =&p ;
    int **b =&p;
    int ***r = &q ;
    int ****x =&r ;
    int *****y = &r;
    


    return 0;

}