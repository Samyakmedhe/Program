#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL check(int Arr[],int ilength,int ino)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <= ilength ;iCnt ++)
    {
        
        scanf("%d",&ino);

    }

printf("\n");
}



int main ()
{

    int iSize = 0, iRet = 0 ,iCnt= 0;
    int  iValue = 0;
    int *p = NULL;
    BOOL bRet = false;

    printf("enter number of elemnts ");
    scanf("%d",&iSize);

    printf("enter number");
    scanf("%d",&iValue);

    p = (int *)malloc (iSize *sizeof(int));

    if (p == NULL)
    {
        printf("unnable to allocate memory");
        return -1;
    }

    printf("enter %d element",iSize);

    for(iCnt = 0; iCnt < iSize;iCnt++ )
    {
        printf("\nenter element %d :",iCnt +1);
        scanf("%d",&p[iCnt]);
    }
    bRet = check(p,iSize,iValue);

    if(bRet == true)
    {
        printf("number is present");

    }
    else
    {
        printf("number is not present ");

        
    }

free(p);
    return 0;
}