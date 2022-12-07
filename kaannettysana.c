// Stack implementation in C
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Creating a stack
struct stack {
	int items[MAX];
	int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
	s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
	if (s->top == MAX - 1)
	return 1;
	else
	return 0;
}

// Check if the stack is empty
int isempty(st *s) {
	if (s->top == -1)
	return 1;
	else
	return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
	if (isfull(s)) {
		printf("STACK FULL");
	}
	else {
		s->top++;
		s->items[s->top] = newitem;
	}
}

// Remove element from stack
void pop(st *s) {
	if (isempty(s)) {
		printf("\n STACK EMPTY \n");
	}
	else {
		printf("%c", s->items[s->top]);
		s->top--;
	}
	printf("\n");
}

// Print elements of stack
void printStack(st *s) {
	printf("\nStack:");
	for (int i = 0; i < s->top+1; i++){
		printf("\n%c ", s->items[i]);
	}
	printf("\n");
}

// Driver code
int main(){
	int tkk;
	st *s = (st *)malloc(sizeof(st));
	char ch;
	
	createEmptyStack(s);

	printf("Syota sanasi pituus: ");
	scanf("%d", &tkk);
	printf("\nSyota sanasi kirjain kerrallaan\n");
	for(int i = 0; i < tkk; i++){
		printf("Kirjain %d : ", i+1);
		scanf("\n %c", &ch);
		push(s, ch);
	}

	printStack(s);

	printf("\nStack kaannettyna: \n");
	for(int i = 5; i > 0; i--){
		pop(s);
	}
  
	free(s);
  
	return 0;
}