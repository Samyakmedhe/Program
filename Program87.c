#include<stdio.h>

void display (int ino)
{
    int iCnt = 0;
    

    for(iCnt = -ino ; iCnt <= ino ; iCnt ++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main ()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    display(ivalue);

    return 0 ;
}
