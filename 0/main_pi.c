#include <stdio.h>
#define PI 3.14
float pi()
{
  return PI;
}

int main()
{
  printf("Acá calculo la longitud usando el valor:\n");
  printf("%f\n", pi());
  return 0;
}