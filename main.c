#include <math.h>
#include <stdio.h>

void print_binary_uc(unsigned char c) {
  for (int i = 7; i >= 0; i--) {
    printf("%d", (c >> i) & 1);
  }
}

void print_binary_f(float f) {
  unsigned char *p = (unsigned char *)&f;
  for (int i = sizeof(float) - 1; i >= 0; i--) {
    print_binary_uc(p[i]);
    printf(" ");
  }
}

int main(void) {
  float f = powf(2, -126) + powf(2, -127);
  float g = powf(2, -126);
  print_binary_f(f);
  printf("\n");
  print_binary_f(g);
  printf("\n");
  print_binary_f(f - g); // subnormal number
  printf("\n");
  return 0;
}
