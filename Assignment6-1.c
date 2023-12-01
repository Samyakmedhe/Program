#include<stdio.h>
void pattern(int ino)
{
    int iCnt = 0 ;
    for(ino=ino  ;ino<0;ino--)
    {
        printf("&");
    }
    
}

int main ()
{

    int ivalue = 0;
    printf("enter number ");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return 0 ;
}