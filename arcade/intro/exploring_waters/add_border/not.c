#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definition for arrays:
typedef struct arr_string {
	int size;
	char *arr;
}arr_string;

arr_string alloc_arr_string(int len) {
	arr_string a = {len, len > 0 ? malloc(sizeof(char) * len) : NULL};
	return a;
}
 
arr_string addBorder(arr_string picture) {
	arr_string with_border = alloc_arr_string(picture.size+2);
	char *asterisks = malloc(sizeof(char)*(strlen(picture.arr[0])+2));
	
	for(int i = 0; i < picture.size+2; i++){
			with_border.arr[i] = malloc(sizeof(char)*(strlen(picture.arr[0])+2));
	}
	
	for(int i = 0; i < (strlen(picture.arr[0])+2); i++){
		strcat(asterisks, "*");
	}
		
	strcpy(with_border.arr[0], asterisks);
	strcpy(with_border.arr[with_border.size - 1], asterisks);
	
	for(int i = 1; i < with_border.size - 1; i++){
		char *aux_string = malloc(sizeof(char)*(strlen(picture.arr[0])+2));
		strcat(aux_string, "*");
		strcat(aux_string, picture.arr[i - 1]);
		strcat(aux_string, "*");
		strcpy(with_border.arr[i], aux_string);
		free(aux_string);
	}
	
	return with_border;
}

