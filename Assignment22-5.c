#include<stdio.h>


void Pattern(int irow , int icol)
{
    int i = 0;
    int j = 0;
    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j<=icol; j++ )
        {
           if((j == icol)||(i == j)||(i == 1)||(i < j))
            {
                printf("%d\t",j);
            } 
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
int main ()
{
    int ivalue1 = 0, ivalue2 = 0;
    printf("enter number of rows and columns");
    scanf("%d %d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);

    return 0;
}