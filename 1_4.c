#include <stdio.h>

int main(){

	int a = 0, i = 1, count = 0;

	scanf("%d", &a);
	count = a-1;
	while(i <= a){

		while(count < a){

			printf("*");
			count++;
		}
		printf("\n");
		i++;
		count = count - i;
	}	
}

