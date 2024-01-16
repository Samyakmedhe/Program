#include<stdio.h>

int CountEven(int Arr[],int iSize)
{
    static int iCnt = 0;
    static int iEven = 0;

    if(iCnt < iSize)
    {
        if((Arr[iCnt] % 2 == 0))
        {
            iEven++;
        }
        iCnt++;
        CountEven(Arr,iSize);
       
    }
    return iEven;
}

int main()
{
    int Arr[5] = {10,20,7,40,50};
    int iRet = 0;
    iRet = CountEven(Arr,5);
    printf("Even count is : %d\n",iRet);

    
    return 0;
}