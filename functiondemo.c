#include<stdio.h>
int addition (int no1 , int no2)
{

    int ans =0;
    ans = no1 + no2;
    return ans;
}
int main ()
{
    int value1 = 0, value2 =0;
    int ret = 0;
     
          printf("Enter first number:\n");
     scanf("%d",&value1);

     printf("Enter second number:\n");
     scanf("%d",&value2);

     ret = addition (value1,value2);
     printf("addition is :%d \n",ret);

     return 0;

}