#include<stdio.h>
#include<stdlib.h>

void display(int Arr[], int isize)
{
     int iCnt = 0;

     for (iCnt = 0; iCnt < isize; iCnt++)
     {
        printf("%d\t",Arr[iCnt]);

     }
     printf("\n");
}


int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    printf("enter the number of element: \n");
    scanf("%d",&iCount);

    ptr = (int *) malloc(iCount * sizeof(int));

    printf("enter the element :\n");

    for(iCnt = 0;iCnt < iCount;iCnt++)
    { 
    scanf("%d",&ptr[iCnt]);
    }

 
    display (ptr,iCount); 
    
    return 0 ;
}