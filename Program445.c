#include<stdio.h>

void DisplayDigits(int iNo)
{
     int Digit = 0;
    
    if(iNo != 0) 
    {
        Digit = iNo % 10;
        printf("%d\n",Digit);
        iNo = iNo / 10;
        
        DisplayDigits(iNo);
    }
}
int main()
{
    int iValue = 0;
   
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);
  
    return 0;
}