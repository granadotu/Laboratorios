#include <stdio.h>

float c2f(float C) {
  return (C * 9.0 / 5.0) + 32.0;
  
}

float f2c(float F) {
  return (F - 32) * 5.0 / 9.0;
  
}

int main() {

  int escolha;
  float temp;

  printf("1. Converter de Celsius para Fahrenheit\n");
  printf("2. Converter de Fahrenheit para Celsius\n");
  printf("\n");
  printf("Escolha uma das opcoes: ");
  scanf("%d", &escolha);

  switch(escolha) {
    case 1:
      printf("Digite a temperatura em Celsius: ");
      scanf("%f", &temp);
      printf("%.2f Celsius equivale a %.2f Fahrenheit\n", temp, c2f(temp));
      break;

    case 2:
      printf("Digite a temperatura em Fahrenheit: ");
      scanf("%f", &temp);
      printf("%.2f Fahrenheit equivale a %.2f Celsius\n", temp, f2c(temp));
      break;

    default:
      printf("Opcao invalida!");
    
  }
}
