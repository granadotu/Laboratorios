#include <stdio.h>
#include <stdbool.h>

int inteiro(int N, int D) {
  if(N % D == 0) {
    return true;
  } else {
    return false;
  }
}

int quant(int M) {
  int count = 0;
  for(int div = 1; div <= M; div++) {
    if(inteiro(M, div)) {
      count++;
    }
  }
  return count;
}

int main() {
  int num;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  int divs = quant(num);
  printf("Existem %d divisores no numero inteiro %d\n", divs, num);
  return 0;
  
}
