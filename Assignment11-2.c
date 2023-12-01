#include<stdio.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL chkZero(int ino)
{
    int ivalue = 0;
    while(ino > 0 )
    {
        if( ino % 10 == 0)
        return true ;
        
        ino /= 10;
    
    }
    return false ;
}


int main ()
{
    int ivalue = 0;
    BOOL bRet = false;

    printf("enter number \n");
    scanf("%d",&ivalue);

    bRet = chkZero(ivalue);

    if(bRet == true)
    {
        printf("It contain Zero \n");
    }
    else
    {
        printf("there is no Zero");

    }
    
    return 0 ;
}