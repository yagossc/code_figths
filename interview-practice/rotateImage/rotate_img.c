// Definition for arrays:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
arr_arr_integer rotateImage(arr_arr_integer a) {
    int k = 0;
    arr_arr_integer final_img = alloc_arr_arr_integer(a.size);
    for(int i = 0; i < a.size; i++){
        final_img.arr[i] = alloc_arr_integer(a.size);
    }
   for(int i = 0; i < a.size; i++){
       for(int j = a.size - 1; j >= 0 ; j--){
           final_img.arr[i].arr[k] = a.arr[j].arr[i];
           k++;
       }k = 0;
   }
    return final_img;
}

