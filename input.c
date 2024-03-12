#include <stdio.h>
#include <math.h>

double myPow(double, int);

int main(int argc, char *argv[])
{
  int radius;

  scanf("%i", &radius); // & the address-of operator

  float circum = 2 * M_PI * radius;
  float area = M_PI * myPow(radius, 2);

  printf("Circumference: %f\n", circum);
  printf("Area: %f\n", area);
  // formatting works similarly to rust
  // every formating character allows for its own argument
  // printf("%f %s") allows for 2 arguments, 
  // a float and a strng.

  return 0;
}


double myPow(double n, int exponent) {
  if (exponent == 1) 
    return n;

  return myPow(n*n, --exponent);
}
