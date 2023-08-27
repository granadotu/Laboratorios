#include <stdio.h>

int main() {
	int num;
	
	printf("Escreva um numero inteiro: \n");
	scanf("%d", &num);
	printf("Os divisores de %d sao: ", num);
	
	for(int div = 1; div <= num; div++) {
		if(num % div == 0) {
			
			printf("%d ", div);
			
		}
	}
}
