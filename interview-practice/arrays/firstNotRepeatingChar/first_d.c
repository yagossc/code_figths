#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 128

char firstNotRepeatingCharacter(char * s){
	int aux_buffer[SIZE][2];
	int position = 100000;
	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < 2; j++){
			aux_buffer[i][j] = 0;
		}
	}
	char c = '_';
	for(int i = 0; i < strlen(s); i++){
		aux_buffer[s[i]][0]+=1;
		aux_buffer[s[i]][1]= i;
	}
	for(int i = 0; i < SIZE; i++){
		if(aux_buffer[i][0] == 1 && aux_buffer[i][1] < position){
			position = aux_buffer[i][1];
			c = (char)i;
		}
	}
	return c;
}

int main(int argc, char *argv[])
{
	char c = firstNotRepeatingCharacter("ngrhhqbhnsipkcoqjyviikvxbxyphsnjpdxkhtadltsuxbfbrkof");
	printf("%c\n", c);
	return 0;
}
