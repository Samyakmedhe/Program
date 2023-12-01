

#include<stdio.h>
#include<stdlib.h>
int Frequencey (int Arr[],int iSize,int ino)
{
    int iCnt = 0;
    int ifrequencey = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]== ino)
        {
            ifrequencey++;

        }
    }    
return ifrequencey;
   
}

int main ()
{
    int iCount = 0, iCnt = 0 ,  ivalue = 0; 
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
    printf("enter the element that you want to search :\n");
    scanf("%d",&ivalue);

    iRet =  Frequencey(ptr ,iCount,ivalue);
    printf("%d occurs %d time\n",ivalue,iRet );

    free (ptr);
    printf("dynamic memory gets delocated succesfully");

 return 0;
}