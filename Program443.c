#include<stdio.h>

int SumFactors(int iNo)
{
    int  iCnt = 1;
    int iSum = 0;
    
    while(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
           iSum = iSum + iCnt;
           
        }  
        iCnt++; 
    }
    return iSum;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    iRet = SumFactors(iValue);
    printf("Addition of Factors is  : %d\n",iRet);
    return 0;
}