#include<stdio.h>
void display (int no ,int iFrequency)
{
    int ino = 0;
    int ifrequency= 0 ;

    for(ino= 1 ;ino<=5;ino++)
    {
        printf("%d",&ino);
    }
}
int main () 
{
    int ivalue =0;
    int icount =0;

    printf("enter number");
    scanf("%d",&ivalue);

    printf("enter frequency");
    scanf("%d",&icount);

    display( ivalue, icount);

    return 0 ;

}