#include <stdio.h>
#include <limits.h>


void char_to_binary(char c) {
  int i;
  for (i = 7; i >= 0; i--) {
    printf("%d", (c >> i) & 1);
  }
  printf("\n");
}

int main() {
  char a,b;
  a = '\0';
  printf("a = %d\n", a);
  b = (unsigned char)200 + a;
  printf("b = %d\n", b);
  return 0;
}