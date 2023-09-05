#include <stdio.h>
#include <math.h>

float func(int n) {
  float resultadoFunc = 0;

  for(float v = 1; v <= n; v++) {
    resultadoFunc += v / pow(v, 2) * pow(-1, v + 1);
  }
  return resultadoFunc;
}

int main() {
  int n;
  printf("Digite um valor: ");
  scanf("%d", &n);

  float resultadoFinal = func(n);
  printf("%f", resultadoFinal);
  return 0;
}
