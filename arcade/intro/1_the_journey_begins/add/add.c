/* The problem:
Write a function that returns the sum of two numbers.

Example
For param1 = 1 and param2 = 2,
the output should be:
  add(param1, param2) = 3.

Input/Output
    [execution time limit] 0.5 seconds (c)
    [input] integer param1
      Guaranteed constraints:
        -1000 ≤ param1 ≤ 1000.

    [input] integer param2
      Guaranteed constraints:
        -1000 ≤ param2 ≤ 1000.

    [output] integer
      The sum of the two inputs. */


#include <stdio.h>

int add(int param1, int param2) {
  return param1 + param2;
}

int main() {
  printf("add: %d\n", add(2, 2));
  return 0;
}
