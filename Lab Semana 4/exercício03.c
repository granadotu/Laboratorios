#include <stdio.h>

int tabuada(int n) {
  
  for(int i = 1; i <= 10; i++) {
    printf("%d*%d = %d\n", i, n, n*i);
  }
}


int main() {
  int n;
  printf("Digite um número entre 1 e 9: ");
  scanf("%d", &n);

  if(n < 10) {
    int i;
    tabuada(n);
    
  }
  else {
    printf("Numero Invalido\n");
  }
  
  
}
