#include<stdio.h>
#include<stdbool.h>
void sumfactors(int ino ) 
{
    int iCnt = 0;  
    int isum = 0 ;        
    for (iCnt = 1; iCnt<=(ino/2) ;iCnt++)
    
        if((ino % iCnt)== 0)
        {
           isum = isum + iCnt;  }  
           
           
             
    return isum;

}
int main ()
{
    int ivalue = 0;
      int  iRet = 0;

   printf("enter the number:\n");
    scanf("%d",&ivalue);
    
  iRet = Sumfactor(ivalue);
  printf("sum of factor :%d",&ivalue);



    return 0 ;
}
// time complexity : 0(n/2)