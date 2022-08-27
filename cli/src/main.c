#include <stdio.h>
// include the generated header
#include <lib.h>

int main() {
  hello();
  uint64_t x = add(40, 2);
  printf("add(40, 2) = %lu\n", x);
  return 0;
}