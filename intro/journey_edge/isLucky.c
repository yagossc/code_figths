#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000000

int isLucky(int n) {

	char s[SIZE];
	memset(s, '\0', SIZE);
	snprintf(s, SIZE, "%d", n);
	printf("%s\n", s);
    printf("%d\n", strlen(s));
    char s_bottom[SIZE/2];
	memset(s_bottom, '\0', SIZE/2);
    char s_top[SIZE/2];
    memset(s_top, '\0', SIZE/2);
    int i = 0;
    int j = 0;
    for(i = 0; i < strlen(s)/2; i++){
        s_bottom[i] = s[i];
    }
    printf("%s\n", s_bottom);
    for(j = strlen(s)/2; j < strlen(s); j++){
        s_top[j - strlen(s)/2] = s[j];
    }
    printf("%s\n", s_top);

    printf("%d\n", strlen(s_top));
    printf("%d\n", strlen(s_bottom));

    int k = 0;
    int t1 = 0;
    int t2 = 0;
    for(k = 0; k < strlen(s_top); k++){
    	printf("%d\n", s_top[k] - '0');
    }
    if(atoi(s_bottom) == atoi(s_top))
        return 1;
    else
        return 0;

}

int main(int argc, char *argv[])
{
/*	char s[SIZE];
	int n = atoi(argv[1]);
	memset(s, '\0', SIZE);
	printf("%d\n", n);
	snprintf(s, SIZE, "%d", n);
	printf("%s\n", s);
*/
	if(isLucky(1230)) printf("It is.\n");
	return 0;
}
