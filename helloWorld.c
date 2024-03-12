#include <stdio.h>

// PROTOTYPES ARE MANDATORY
int tutorial();
char* returnString();

int main(int argc, char *argv[])
{
  printf("Hello World\n");
  tutorial();

  int x[] = {0, 1, 2};
  char * y = returnString();
  
  printf("%s", y);
  return 0;
}

char* returnString() {
  char * this = "this";
  return this;
}

int tutorial() {
  int x = 10;
  int y = x / 2;

  printf("%i", 9001);
  return 0;
}
