#include <stdio.h>
#include <stdbool.h>

bool primo(int n) {
  if(n <= 1) {
    return false;
  }
  for(int p = 2; p * p <= n; p++) {
    if(n % p == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int N1, N2;
  
  printf("Digite um numero: ");
  scanf("%d", &N1);

  printf("Digite outro numero: ");
  scanf("%d", &N2);

  printf("Os numeros primos existentes entre o numero %d e %d são: \n", N1, N2);
  
  for(int p = N1; p <= N2; p++) {
    if(primo(p)) {
      printf("%d ", p);
    }
  }
  printf("\n");
  
  return 0;
}
