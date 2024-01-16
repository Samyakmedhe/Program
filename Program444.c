#include<stdio.h>

int SumFactorsR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;
    
    while(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
           iSum = iSum + iCnt;
           
        }  
        iCnt++; 
        SumFactorsR(iNo);
    }
    return iSum;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    iRet = SumFactorsR(iValue);
    printf("Addition of Factors is  : %d\n",iRet);
    return 0;
}