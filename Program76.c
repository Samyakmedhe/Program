#include<stdio.h>
#include<stdlib.h>
float Average (int Arr[],int iSize)
{

    int iCnt =0 ,iSum = 0;
    float fAverage = 0.0f;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    fAverage = ((float)iSum/(float)iSize);
     return fAverage;
}
int main ()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0f;
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
    fRet = Average(ptr ,  iCount);
    printf("average is : %f\n ",fRet);

    free (ptr);
    printf("dynamic memory gets delocated succesfully");

 return 0;
}