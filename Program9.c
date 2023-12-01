#include<stdio.h>

long int calculatecube(int ivalue)
{
long int icube = 0;

icube = ivalue*ivalue*ivalue;
return icube ;


}

int main ()
{

    int ino = 0 ;
    int long ians = 0 ;

     printf("enter number :\n");
     scanf("%d",&ino);


     ians =  calculatecube (ino);
     printf("cube is : %ld\n",ians);

    return 0 ;

}