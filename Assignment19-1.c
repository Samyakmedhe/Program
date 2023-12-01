#include<stdio.h>

void Pattern(int irow,int icol)
{
    int iCnt = 0;
    int i =0;
    int ino = 0;
    for(iCnt = 1; iCnt <=irow;iCnt++,ino++)
    {
        for(i = 1; i <= icol;i++,ino++)
        {
            printf("%d\t",ino);
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