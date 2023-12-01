#include<stdio.h>
#include<stdbool.h>
boolcheckEven (int ino)
{

    if((ino % 2)==0)
    {
        return true;

    }
    else 
    {
        return false ;

    }
}


int main ()
{
    int ivalue = 0 ;
    bool bRet = false ;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    bRet = checkEven(ivalue);

    if(bRet== true)
    {
        printf("%dis an even number\n",ivalue);


    }
    else
    {
      printf("%dis an odd number\n",ivalue);

    }
    return 0 ; 
}