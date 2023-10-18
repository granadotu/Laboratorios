#include <stdio.h>
#include <stdlib.h>

int** somarMatrizes(int** A, int** B, int linhas, int colunas) {
    int** C = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        C[i] = (int*)malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    return C;
}

void liberarMatriz(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int linhas, colunas;

    printf("Digite o numero de linhas das matrizes A e B: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas das matrizes A e B: ");
    scanf("%d", &colunas);

    int** A = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        A[i] = (int*)malloc(colunas * sizeof(int));
    }

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int** B = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        B[i] = (int*)malloc(colunas * sizeof(int));
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int** C = somarMatrizes(A, B, linhas, colunas);

    printf("A matriz resultante da soma de A + B eh:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    liberarMatriz(A, linhas);
    liberarMatriz(B, linhas);
    liberarMatriz(C, linhas);

    return 0;
}

