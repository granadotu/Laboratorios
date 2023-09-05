#include <stdio.h>

float soma(float a, float b, float c) {
  return a + b + c;
  
}

int main() {

  float valor1, valor2, valor3, resultado;

  printf("Digite o primeiro valor numerico: ");
  scanf("%f", &valor1);

  printf("Digite o segundo valor numerico: ");
  scanf("%f", &valor2);

  printf("Digite o terceiro valor numerico: ");
  scanf("%f", &valor3);

  resultado = soma(valor1, valor2, valor3);

  printf("%.4f", resultado);

}
