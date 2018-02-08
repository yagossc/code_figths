#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int commonCharacterCount(char * s1, char * s2) {
    int alpha1[256] = {0};
    int alpha2[256] = {0};
    int total = 0;
    for(int i = 0; i < strlen(s1); i++){
        alpha1[s1[i]]+=1;
    }
    for(int j = 0; j < strlen(s2); j++){
        alpha2[s2[j]]+=1;
    }
    for(int k = 0; k < 256; k++){
        if(alpha1[k] > 0 && alpha2[k] > 0){
            if(alpha1[k] < alpha2[k])
                total+=alpha1[k];
            else
                total+=alpha2[k];
        }
    }
    return total;
}

int main(int argc, char *argv[])
{
	char *s1 = "aabcc";
	char *s2 = "adcaa";
	printf("%d\n", commonCharacterCount(s1, s2));
	return 0;
}
