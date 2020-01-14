#include <stdio.h>
#include <stdlib.h>


// Definition for arrays:
typedef struct arr_integer {
  int size;
  int *arr;
 } arr_integer;

 arr_integer alloc_arr_integer(int len) {
   arr_integer a = {len, len > 0 ? malloc(sizeof(int) * len) : NULL};
   return a;
 }


/*int isIncreasing(arr_integer sequence, int curr){
    int check = 1;
    int j = 0;
    for(int i = 0; i < sequence.size - 1; i++){
        if(i == curr )i++;
        j= i+1;
        if(j == curr) j++;
        if(j >= sequence.size) break;
        if(sequence.arr[i]  > sequence.arr[j] || sequence.arr[i] == sequence.arr[j]){
            check = 0;
            break;
	   }
    }
    return check;
}

int almostIncreasingSequence(arr_integer sequence) {
    arr_integer subSequence = alloc_arr_integer(sequence.size - 1);
    for(int i = 0; i < sequence.size; i++){
              
        if(isIncreasing(sequence, i))
            return 1;
        
        sequence.arr[i] = aux;
    }
    return 0;
}*/

int isIncreasing(arr_integer sequence){
    int check = 1;
    for(int i = 0; i < sequence.size - 1; i++){
        if(sequence.arr[i]  > sequence.arr[i + 1]){
            check = 0;
	   }
    }
    return check;
}

int almostIncreasingSequence(arr_integer sequence) {
    arr_integer subSequence = alloc_arr_integer(sequence.size - 1);
    int k =0;
    for(int i = 0; i < sequence.size; i++){
        for(int j = 0; j < sequence.size; j++){
            if(j != i){
              subSequence.arr[k] = sequence.arr[j];
                k++;
            }
        }
        k = 0;
        if(isIncreasing(subSequence))
	{
            return 1;
	   }
    }
    return 0;
}

int main(int argc, char *argv[])
{
	arr_integer array = alloc_arr_integer(4);
	array.arr[0] = 1;
	array.arr[1] = 2;
	array.arr[2] = 1;
	array.arr[3] = 2;
	if(almostIncreasingSequence(array) == 1)
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
