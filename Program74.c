#include<stdio.h>
#include<stdlib.h>

int Addition (int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr [iCnt] ;
    }
    return iSum;
}


int main ()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("enter number of element that you want to enter: \n");
    scanf("%d",&iCount);

    ptr = (int *) malloc(iCount * sizeof(int));

    printf("dynamic memory gets allocated succesfully for %d elements\n",iCount);

    printf("enter the %d value :\n",iCount);
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n enter the element no %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet =  Addition (ptr, iCount);
    printf("number of Addiytion element are : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocted succesfully...\n");

    return 0;

}