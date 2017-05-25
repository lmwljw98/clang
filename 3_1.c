#include <stdio.h>

#define SIZE 20

int stack[SIZE];
int top = 0;

void push(int num){
	if(top < 20){
		stack[top] = num;
		top++;
		printf("Pushed %d\n\n", num);
	}
	else{
		printf("Stack Overflow\n\n");
	
	}
}

void pop(){
	if(top > 0){
		stack[top] = 0;
		top--;
		printf("Poped %d\n\n", stack[top]);
	}
	else{
		printf("You don't push any number to stack\n\n");
	}
}

void print_stack(int* stack, int top){
	top--;
	printf("-----Your Stack-----\n");
	while(top >= 0){

		printf("%d\n", stack[top]);
		top--;

	}
	printf("\n");
}
int main(){

	int select = 0;
	int data = 0;
	while(1){
		printf("Stack Example by LJW\nSelect Your Process\n");
		printf("1. Push Data\n");
		printf("2. Pop Data\n");
		printf("3. Print Your Stack\n");

		scanf("%d", &select);
		switch(select){
			case 1:
				system("clear");
				printf("Push your Number : ");
				scanf("%d", &data);
				push(data);
				break;
			
			case 2:
				system("clear");
				pop();
				break;
			
			case 3:
				system("clear");
				print_stack(stack,top);
				break;
		}
	}
}

