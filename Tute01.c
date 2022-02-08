/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int fmarks , smarks , x;

  printf("Enter your first marks:");
  scanf("%d",&fmarks);

  printf("Enter your second marks:");
  scanf("%d",&smarks);

  x = (fmarks + smarks)/2;

  printf("The avarage is :%d",x);
  return 0;
}

