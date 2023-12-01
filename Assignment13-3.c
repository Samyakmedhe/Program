#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;

     printf("\n even numbr of elemnts :");
   
        for (iCnt = 0;iCnt < iLength ;iCnt++)
        {
            if(Arr[iCnt]% 2 == 0  &&  Arr[iCnt]% 5 ==0) 
            {
                 printf("%d\t",Arr[iCnt]);
            }
        }
    printf("\n");
}
int main ()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;
    printf("enter number of elements ");
    scanf("%d",&iSize);

    p = (int *)malloc (iSize *sizeof(int));

    if (p == NULL)
    {
        printf("unable to allocate memory");
        return -1;

    }

    printf("enter %d element : \n",iSize);
     for(iCnt = 0 ; iCnt < iSize; iCnt++)
     {
        printf("\nenter elment no %d :",iCnt +1);
        scanf("%d",&p[iCnt]);

     }
     iRet =  Difference(p ,iSize);

    
    free (p);

    return 0;

}