#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;
int Maximum(int Arr[],int iLength)
{
 int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]> iMax)
        {
            iMax = Arr[iCnt];
        }
        return iMax;
    }    
   
  
}
int main ()
{
    int iSize  = 0, iRet = 0 , iCnt = 0;
    int *p = NULL;
    
    printf("enter number of elements ");
    scanf("%d",&iSize);

    p = (int *)malloc (iSize *sizeof(int));

    printf("enter the %d element :\n");
   
     for(iCnt = 0 ; iCnt < iSize; iCnt++)
     {
        printf("\nenter elment no %d :",iCnt +1);
        scanf("%d",&p[iCnt]);

     }
     iRet = Maximum(p ,iSize);
     printf("largest number is %d\n",iRet);


    
    free (p);

    return 0;

}