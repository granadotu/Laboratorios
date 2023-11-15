#include <stdio.h>

int mdc(int a, int b) {

  if(b == 0) {return a;}
  else if(a == 0) {return b;}
  else {
    int r = a % b;
    return mdc(b, r);
  }
}

int main() {
  printf("Digite o valor de a: ");
  int a; int b; int r;
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  if(a < 0) {
    return printf("Valor não pode ser negativo!");
  }
  else if(b < 0) {
    return printf("Valor não pode ser negativo!");
  }

  printf("MDC de %d e %d é %d", a, b, mdc(a, b));
  
}