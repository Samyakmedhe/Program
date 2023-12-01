#include<stdio.h>

int main ()
{
    char ch ='\0';

    printf("enter the character:\n");
    scanf("%c",&ch);

    printf("ASCII value of character is :%d\n",ch);
    printf("ASCII value of character is :%o\n",ch);
    printf("ASCII value of character is :%x\n",ch);
    
    return 0;
}