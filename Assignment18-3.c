#include<stdio.h>

void Pattern(int irow,int icol)
{
    int iCnt = 0;
    int i =0;
    for(iCnt = irow ; iCnt <= irow;iCnt++)
    {
        for(i = icol; i>= icol;i--)
        {
            printf("%d\t",i);
        }
        printf("\n\n");
    }

}

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("enter number of rows and colum :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}