#include <stdio.h>
#include <stdlib.h>

typedef struct arr_integer{
    int size;
    int *arr;
}arr_integer;

arr_integer alloc_arr_integer(int len) {
    arr_integer a = {len, len > 0 ? malloc(sizeof(int) * len) : NULL};
    return a;
}


int firstDuplicate(arr_integer a) {

    int aux_array[a.size]; //Stores number ocurrance

    //Zero out number of ocurrances
    for(int i = 0; i <= a.size; i++)
        aux_array[i] = 0;

    int smaller_index = -1;

    for(int i = 0; i < a.size; i++){
        aux_array[a.arr[i]]+=1; //Count ocurrance
        //Desired first second ocurrance
        if(aux_array[a.arr[i]] > 1 && smaller_index == -1){
            smaller_index = a.arr[i];
            break;
            }
    }
    return smaller_index;
}

int main(int argc, char *argv[])
{
    int input[7] = {1,2,4,3,3,5,5};
    arr_integer a = alloc_arr_integer(7);

    for(int i = 0; i < 7; i++){
        a.arr[i] = input[i];
    }
    int smaller_index = firstDuplicate(a);
    printf("%d\n", smaller_index);

    return 0;
}
