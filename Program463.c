#include<stdio.h>


int StrlenXR(char *str )
{
    static int iCnt = 0;
    if (*str != '\0')
    {
        iCnt++;
        str++;
        StrlenXR(str);
        
    }
  
    return iCnt;
}
int main()
{
    char Arr [20];
    int iRet = 0;

    printf("Number String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenXR(Arr);
    printf("length of string is : %d\n",iRet);
    
    return 0;
}