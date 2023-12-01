#include<stdio.h>

int main ()

{  

    int arr [4] = {11,21,51,101};

    printf("base address of array :%d\n",arr);

    printf("first element is :%d\n",arr [0]);
    
    printf("address of second element is :%d\n",&(arr[1]));

    
    printf("size of whole array :%d\n",sizeof(arr));

    printf("size of second element of array:%d\n",sizeof(arr[1]));






    return 0;

}