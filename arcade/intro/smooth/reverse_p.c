#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverseParentheses(char * s)
{
	char *r = malloc(sizeof(char)*strlen(s));
	char subString[128] = "";
	char finalString[128] = "";
	int j = 0; int k = 0;

	for(int i = 0; i < strlen(s); i++){
		if(s[i] == '('){
			i++;
			while(s[i] != ')'){
				subString[j] = s[i];
				j++; i++;
			}
			for(int m = strlen(subString) - 1; m >= 0; m--){
				finalString[k] = subString[m];
				k++;
			}
		}
		else{
			finalString[k] = s[i];
			k++;
		}
	}
	memcpy(r, finalString, strlen(finalString));
	printf("%s\n", r);
	return r;
}

typedef struct stack_element{
	char letter;
	struct stack_element *bottom;
}stack_element;

typedef struct stack{
	stack_element *top;
	stack_element *base;
}stack;

void stack_up(stack *s, char c)
{
	stack_element *e = malloc(sizeof(stack_element));
	e->letter = c;
	if(s->top == NULL){
		s->top = e;
		s->base = e;
	}
	else{
		stack_element *aux;
		aux = s->top;
		s->top = e;
		s->top->bottom = aux;
	}
}

char stack_down(stack *s)
{
	printf("stacking down\n");
	char c = s->top->letter;
	if(s->top == s->base){
	}
	else if(s->top != NULL){
		stack_element *aux;
		aux = s->top;
		s->top = s->top->bottom;
		free(aux);
	}
	return c;
}
char * reverseP(char *s)
{
	int r_count = 0;
	int aux_count = 0;
	int size = strlen(s);
	int in_prnts = 1;
	char *r = malloc(sizeof(char)*size);
	char *aux = malloc(sizeof(char)*size);
	memset(r, '\0', size);
	memset(aux, '\0', size);
	stack *stack = malloc(sizeof(stack));
	for(int i = 0; i < size; i++){
		if(s[i] == '('){
			while(in_prnts){
				while(s[i] != ')'){
					stack_up(stack, s[i]);
					i++; 
				}
				while(stack->top->letter != '('){
					aux[aux_count] = stack_down(stack);
					aux_count++;
				}
				if(stack->top != stack->base){
					stack_down(stack);
					for(int j = 0; j < aux_count; j++){
						stack_up(stack, aux[j]);
					}
					in_prnts = 1;
					i++;
				}else{
					stack_down(stack);
					strcat(r, aux);
					in_prnts = 0;
					r_count+=aux_count;
					
				}
				aux_count = 0;
			}
		}else{
			r[r_count] = s[i];
			r_count++;
		}
	}
	return r;
}
int main(int argc, char *argv[])
{
	char *s = reverseP("a(bcdefghijkl(mno)p)q");
	printf("%s\n", s);
	s = reverseP("co(de(fight)s)");
	printf("%s\n", s);
	return 0;
}
