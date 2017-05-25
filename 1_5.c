#include <stdio.h>

int main(){

	int a = 0, b = 1;
	
	scanf("%d", &a);

	for(int num=1; num<=a; num++){

		b *= 2;
	}

	printf("%d\n", b);
}
