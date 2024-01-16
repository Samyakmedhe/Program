#include<stdio.h>


int StrlenX(char *str )
{
    int iCnt = 0;
    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr [20];
    int iRet = 0;

    printf("Number String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);
    printf("length of string is : %d\n",iRet);
    
    return 0;
}