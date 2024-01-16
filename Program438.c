#include<stdio.h>

void DisplayI(int iNo)
{
     int iCnt = 1;
 
    while(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    
    }
}
int main()
{
  
    DisplayI(4);
    
    return 0;
}