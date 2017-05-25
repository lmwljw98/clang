#include <stdio.h>

int main(){

	int a = 1, sum = 0, count = 0;
	double b = 0;

	while(1){

		scanf("%d", &a);
		if(a == 0){
			break;
		}
		else{
			if((a % 5) == 0){
				sum += a;
				count++;
			}
		}
	}
	printf("5의 배수 : %d\n", count);
	printf("합계 : %d\n", sum);
	b = (double)sum / count;
	printf("평균 : %.1f\n", b);
}

	
