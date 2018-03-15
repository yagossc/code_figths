#include <stdio.h>
#include <stdlib.h>

typedef struct arr_char{
	 int size;
	 char *arr;
}arr_char;

arr_char alloc_arr_char(int len) {
	 arr_char a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
	return a;
}

int main(int argc, char *argv[])
{
	return 0;
}
