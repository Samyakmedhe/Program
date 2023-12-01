#include<stdio.h>
#include<stdbool.h>


bool ChkAlpha(char ch)
{
    if((ch>= 65)&&(ch <= 90)||(ch >= 97)&&(ch <= 122))
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

    bret = ChkAlpha(cvalue);

    if(bret == true)
    {
        printf("it is character ");

    }
    else
    {
        printf("it is not a character");
    }


}