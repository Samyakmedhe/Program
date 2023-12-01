

#include<stdio.h>
#include<stdlib.h>
int MaxMin(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]> iMax)
        {
            iMax = Arr[iCnt];
        }
        
        if(Arr[iCnt]< iMin)
        {
            iMin = Arr[iCnt];
        }
        
    }    

   
    printf("Maximum element is:%d\n ",iMax);
     printf("Minimum element is:%d\n ",iMin);
}

int main ()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
   int  iRet = 0;
    printf("enter number of element that you want to enter :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory gets allocated  succesfully");

    printf("enter the %d element :\n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Entr the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    MaxMin(ptr ,  iCount);
    

    free (ptr);
    printf("dynamic memory gets delocated succesfully");

 return 0;
}