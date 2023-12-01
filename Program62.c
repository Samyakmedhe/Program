#include<stdio.h>


int Reverse (int ino)
{

    int iRev = 0;
    int iDigit = 0;

    if(ino < 0)
    {
        ino = -ino ;
    }
    while(ino != 0)
    {
        iDigit = ino % 10;
        ino = ino % 10;

        iRev = (iRev * 10)+ iDigit;

    }
    return iRev;
}
int main ()
{

    int ivalue = 0;
     int iRet  = 0;

    printf("enter number: \n");
    scanf("%d",&ivalue);

    iRet = Reverse(ivalue);
    printf("reverse number is :%d\n",iRet);

    return 0 ;
}
