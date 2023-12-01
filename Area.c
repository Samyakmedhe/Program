#include<stdio.h>
int main()
{
  float radius = 0.0f;
  const float PI = 3.14f;
  float area = 0.0f;
    
    printf("Enter the size of radius :\n");
    scanf("%f",&radius);

  area = PI * radius * radius;

  printf ("area of circle is :%f\n",area);


   return 0;


}
