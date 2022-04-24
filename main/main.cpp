#include <cstdio>
#include "../src/example.h"

int main() {
  printf("Hello Testing\n");

  double res = add_numbers(1, 2);
  printf("%.0lf\n", res);

  return 0;
}