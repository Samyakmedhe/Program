#include<stdio.h>

void display (int ino)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= ino ; iCnt ++)
    {
        printf("%d\t#\t",iCnt);
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
