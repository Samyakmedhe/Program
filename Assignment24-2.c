#include<stdio.h>
#include<stdbool.h>


bool Capital(char ch)
{
    if((ch>= 65)&&(ch <= 90))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main ()
{

    char cvalue = '\0';
    bool bret = false;

    printf("enter the character");
    scanf("%c",&cvalue);

    bret = Capital(cvalue);

    if(bret == true)
    {
        printf("it is capital ");

    }
    else
    {
        printf("it is not a capital");
    }


}