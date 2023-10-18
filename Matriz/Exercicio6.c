#include <stdio.h>
#include <stdlib.h>

int* multiplicarMatrizPorVetor(int** A, int* B, int n) {
    int* C = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        C[i] = 0;
        for (int j = 0; j < n; j++) {
            C[i] += A[i][j] * B[j];
        }
    }

    return C;
}

void liberarMatriz(int** matriz, int n) {
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int n;

    printf("Digite o tamanho da matriz e do vetor: ");
    scanf("%d", &n);

    int** A = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        A[i] = (int*)malloc(n * sizeof(int));
    }

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int* B = (int*)malloc(n * sizeof(int));

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    int* C = multiplicarMatrizPorVetor(A, B, n);

    printf("O vetor resultante da multiplicacao de A por B eh:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    liberarMatriz(A, n);
    free(B);
    free(C);

    return 0;
}

