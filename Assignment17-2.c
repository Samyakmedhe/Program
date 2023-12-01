#include<stdio.h>

void Pattern(int ino)
{
    int iCnt =0;
    
    for(iCnt = ino ; iCnt >=1;iCnt--)
    {
        printf("%d\t#\t",iCnt);

    }
    printf("\n");
}
int main ()
{
    int ivalue = 0;

    printf("enter number of elements ");
    scanf("%d",&ivalue);

    Pattern(ivalue);
    
    return 0;

}