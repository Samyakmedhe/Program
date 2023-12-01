#include<stdio.h>
#include<stdlib.h>


int  EvenCount(int Arr[],int iSize)
{
     int  iCnt = 0;
     int iEvenCnt = 0;

    printf("\n  Even elements of the array are : \n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
         iEvenCnt ++;
        }
        
    }

    return iEvenCnt;
}

int main ()
{
    int iCount = 0, iCnt = 0, iRet  = 0;
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

    iRet = EvenCount (ptr, iCount);
    printf("number of even element are : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocted succesfully...\n");

    return 0;

}