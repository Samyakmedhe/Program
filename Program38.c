#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;
    for(iCnt=ino;iCnt>=1 ;iCnt--)
    {
        printf("%d\n",iCnt);
    }
    
}

int main ()
{
  int ivalue = 0 ;

  printf("enter number of times you want to display on screen\n");
  scanf("%d",&ivalue);

    Display (ivalue);

    

    return 0 ;

}