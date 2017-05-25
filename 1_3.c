#include <stdio.h>

int main(){
	
	int a = 2;

	while(a < 10){

		for(int i = 1; i<10; i++){

			printf("%d * %d = %d  ", a, i, a*i);

		}
		printf("\n\n");
		a++;
	}
}
