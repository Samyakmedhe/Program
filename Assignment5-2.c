#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int main ()
{
    int ivalue = 0;
    BOOL bRet = FALSE;
    Printf("please enter  number");
    scanf("%d",&ivalue);

    bRet = ChkGreater(ivalue);
    if(100>0)
    {
        printf("greater");

    }
    else
    {
        printf("Smaller");

    }
    


    return 0 ;

}