#include<stdio.h>

int Addition (int No1, int No2)
{
  int sum =0;
  sum = No1+ No2;
  return sum ;
}

 int main ()

{ 
    int value1 = 10;
    int value2 = 11;
    int ans = 0;
    
   ans = Addition (value1,value2);
  printf("Addion is : %d \n",ans);

    return 0;
}
