#include<stdio.h>
#include<stdbool.h>
void displayfactors(int ino ) 
{
    int iCnt = 0;
    for (iCnt = 1; iCnt<=(ino/2) ;iCnt++)
    {
        if((ino % iCnt)== 0)
        {
            printf("%d\n",iCnt);
        }
    }


}
int main ()
{
    int ivalue = 0;
    
   printf("enter the number:\n");
    scanf("%d",&ivalue);

    displayfactors (ivalue);



    return 0 ;
}
// time complexity : 0(n/2)