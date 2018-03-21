#include <stdio.h>
#include <stdlib.h>

// Definition for arrays:
typedef struct arr_integer {
	int size;
	int *arr;
} arr_integer;
//
arr_integer alloc_arr_integer(int len) {
	arr_integer a = {len, len > 0 ? malloc(sizeof(int) * len) : NULL};
	return a;
}
//
//

int kthLargestElement(arr_integer nums, int k){
	int aux;
	for(int i = 0; i < nums.size; i++){
		for(int j = 0; j < nums.size - 1; j++){
			if(nums.arr[j] < nums.arr[j+1]){
				aux = nums.arr[j];
				nums.arr[j] = nums.arr[j+1];
				nums.arr[j+1] = aux;
			}
		}
		if(!swaped)
		break;
	}
	for(int i = 0; i < nums.size; i++){
		printf("%d : ", nums.arr[i]);
	}
	return nums.arr[k - 1];
}

int main(int argc, char *argv[])
{
	arr_integer arr = alloc_arr_integer(7);
	for(int i = arr.size - 1; i >= 0; i--){
		arr.arr[i] = i+1;
//		printf("%d, ", arr.arr[i]);
	}
	int lgKth = kthLargestElement(arr, 2);
	printf("\n%d\n", lgKth);
	return 0;
}
