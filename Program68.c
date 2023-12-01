#include<stdio.h>
#include<stdlib.h>


void Display (int Arr[],int iSize)
{
     int  iCnt = 0;
    printf("elements of the array are : \n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main ()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;

    printf("enter number of element that you want to enter: \n");
    scanf("%d",&iCount);

    ptr = (int *) malloc(iCount * sizeof(int));

    printf("enter the value :\n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display (ptr, iCount);

    free(ptr);

    return 0;

}