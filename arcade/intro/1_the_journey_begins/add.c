#include <stdio.h>

int add(int param1, int param2) {
  return param1 + param2;
}

int main() {
  printf("add: %d\n", add(2, 2));
  return 0;
}
