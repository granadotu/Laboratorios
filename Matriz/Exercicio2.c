#include <stdio.h>

int calcularSomaDiagSec(int matriz[][10], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += matriz[i][tamanho - 1 - i];
    }
    return soma;
}

int main() {
    int matriz[10][10]; 
    int tamanho;

    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int somaDiagSec = calcularSomaDiagSec(matriz, tamanho);
    printf("A soma dos elementos da diagonal secundaria eh: %d\n", somaDiagSec);

    return 0;
}

