#include<stdio.h>

float CalculatePercentage(int imarks,int iTotal)
{

 auto float fPercentage = 0.0f;
 fPercentage =( ((float )imarks/(float)iTotal ) *100);
return fPercentage ;


}
int main ()

{
    auto  int ivalue1 = 0;
    auto int ivalue2 = 0;
    auto float fRet  = 0.0f;

    printf("enter the marks :\n");
    scanf("%d",&ivalue1);

    printf("enter the Total  marks :\n");
    scanf("%d",&ivalue2);
    fRet = CalculatePercentage (ivalue1,ivalue2);

    printf("your percentag is : %f\n",fRet);

    return 0;

}