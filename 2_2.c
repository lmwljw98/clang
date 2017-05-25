#include <stdio.h>


int main(){

	int a;
	int *b; 
	b = &a;

	scanf("%d", &a);
	printf("%p %d\n", b, a);

}
