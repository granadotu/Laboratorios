#include <stdio.h>

int main() {
	int num;
	int soma = 0;
	int div;
	
	printf("Escreva um numero inteiro: \n");
	scanf("%d", &num);
	
		for(div = 1; div < num; div++) {
			if(num % div == 0) {
		
			soma += div;
		}
	}
	if(soma == num) {
		printf("%d eh um numero inteiro perfeito.\n", num);
	}
	else {
		printf("%d NAO eh um numero inteiro perfeito.\n", num);
	}
}
	
