/* Given an array of integers, find the pair of adjacent elements that has the largest product and return that product. */

/*   Example */

/*   For inputArray = [3, 6, -2, -5, 7, 3], the output should be */
/*   adjacentElementsProduct(inputArray) = 21. */
/*   7 and 3 produce the largest product. */

/*   Input/Output */

/*   [execution time limit] 0.5 seconds (c) */
/*   [input] array.integer inputArray */
/*     An array of integers containing at least two elements. */
/*     Guaranteed constraints: */
/*       2 ≤ inputArray.length ≤ 10, */
/*       -1000 ≤ inputArray[i] ≤ 1000. */
/*   [output] integer */
/*     The largest product of adjacent elements. */


#include <stdlib.h>

// Definition for arrays:
typedef struct arr_integer {
  int size;
  int *arr;
} arr_integer;

// alloc_arr_integer allocates a type arr_integer
arr_integer alloc_arr_integer(int len) {
  arr_integer a = {len, len > 0 ? malloc(sizeof(int) * len) : NULL};
  return a;
}

// adjacent_elements_product returns the largest product elements pair
int adjacent_elements_product(arr_integer input_array) {
  int largest = -1001;
  for(int i = 0; i < input_array.size; i++){
    if(input_array.arr[i] * input_array.arr[i + 1] > largest)
      largest=input_array.arr[i] * input_array.arr[i + 1];
  }
  return largest;
}

int main() {
  arr_integer sample_arr = alloc_arr_integer(6);
  sample_arr.arr[0] = 3;
  sample_arr.arr[0] = 6;
  sample_arr.arr[0] = -2;
  sample_arr.arr[0] = -5;
  sample_arr.arr[0] = 7;
  sample_arr.arr[0] = 3;

  if (adjacent_elements_product(sample_arr) != 21) return -1;

  return 0;
}
