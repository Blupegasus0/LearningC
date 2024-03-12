#include <stdio.h>

int main() {
  int eggs;
  printf("How many eggs have you produced today?\n");

  scanf("%i", &eggs);

  float dozens = eggs / (float)12;

  printf("You have made %f dozen eggs today", dozens);

}
