#include <stdio.h>
#include <stdbool.h>

bool crescente(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (v[i] >= v[i+1]) {
          return false;
        }
    }
    return true;
}

int main() {
    printf("Entre o numero de elementos do vetor: ");
    int n;
    if (!scanf("%d", &n)) {
      return 1;
    }
    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posicao %d: ", i);
        if (!scanf("%d", &vetor[i])) {
          return 1;
        }
    }
    if (crescente(vetor, n)) {
      printf("ESTA em ordem crescente!\n");
    }
    else {
      printf("NAO ESTA em ordem crescente!\n");
    }
    return 0;
}
