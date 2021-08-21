// This is an include directive.
// 
// It tells the compiler to 'include' the contents of a file in the standard library
// called "stdio.h" into our program.
#include <stdio.h>

// Hope you recognize this.
// 
// I spoke in Section 2.1 "Hello World" about the 'main' function and its purpose.
// Feel free to revisit the section if you need a refresher on the purpose of this
// specially named function.
int main(int argc, char** argv)
{
  // INT data type.
  int a = 1;
  printf("Size of variable a : %d\n", sizeof(a));
  printf("Size of data type INT : %i\n", sizeof(int));

  // CHAR data type.
  char b = 'b';
  printf("Size of variable b : %d\n", sizeof((char) b));
  printf("Size of data type CHAR : %i\n", sizeof(char));

  // FLOAT data type.
  float c = 1.0;
  printf("Size of variable c : %d\n", sizeof((float) c));
  printf("Size of data type FLOAT : %d\n", sizeof(float));

  // DOUBLE data type.
  double d = 1.0;
  printf("Size of variable d : %d\n", sizeof((double) d));
  printf("Size of data type DOUBLE : %d\n", sizeof(double));

  // SHORT data type.
  short e = 1;
  printf("Size of variable e : %d\n", sizeof((short) e));
  printf("Size of data type SHORT : %d\n", sizeof(short));
}
