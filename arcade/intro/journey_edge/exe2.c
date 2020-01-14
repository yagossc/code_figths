#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int centuryFromYear(int year)
{
    int century = year/100;
    int resto = year%100;
    printf("%lf\n", century);
    printf("%d\n", resto);
    if(resto == 0){
        return century ;
    }
    else{
        return century+1;  
    }
}


int checkPalindrome(char * input_string){
	char *reverse_string = malloc(strlen(input_string)*sizeof(char) );
	int j = strlen(input_string) - 1;
//	reverse_string[j] = '\0';
        for(int i = 0; i < strlen(input_string); i++){
                reverse_string[j] = input_string[i];
		j--;
        }
	printf("reverse: %s\n", reverse_string);
	printf("input_string:%s\n", input_string);
        if(strcmp(reverse_string, input_string) == 0)
                return 1;
        else
                return 0;
}

int main(int argc, char *argv[])
{
	int c = centuryFromYear(1905);
	checkPalindrome("aabaa");
	return 0;

}
