#include <stdio.h>

int main(){

	int a = 0, sum = 0, count = 0;
	double b;
	while(1){

		scanf("%d", &a);
		if (a > 100){
			break;

		}
		else{
			sum += a;
			++count;
		}
	}
	b = (double)sum / count;
	printf("합계 : %d\n평균 : %.1f\n", sum, b);
} 

	
