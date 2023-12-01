#include<stdio.h>

void Display (int ino )
{
    int iCnt = 0;
   
    for(iCnt = 1; iCnt <= ino; iCnt++) 
    {
        printf("jay ganesh...\n");
    }
}

int main ()
{
  int ivalue = 0;
    printf("enter to number of time you want to display jay ganesh on screen ");
    scanf("%d",&ivalue);
  
    Display (ivalue);
    

    return 0 ;

}