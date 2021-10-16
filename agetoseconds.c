#include <stdio.h>
#include <string.h>

/*
write a program that requests your age in years and 
then displays the equivalent
number of seconds
*/

int main(void) {
  

double s = 31560000;
int y;

  printf("Please enter your age in years: \n");
  scanf("%d", &y);
  printf("This is how many seconds you've lived:\n%f ", (y*s));

  return 0;
}