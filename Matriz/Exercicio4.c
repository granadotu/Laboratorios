#include <stdio.h>
#include <stdlib.h>

int** calcularTransposta(int** matriz, int linhas, int colunas) {
    int** transposta = (int**)malloc(colunas * sizeof(int*));
    for (int i = 0; i < colunas; i++) {
        transposta[i] = (int*)malloc(linhas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    return transposta;
}

void liberarMatriz(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int linhas, colunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    int** matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int** transposta = calcularTransposta(matriz, linhas, colunas);
    printf("A transposta da matriz é:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    liberarMatriz(matriz, linhas);
    liberarMatriz(transposta, colunas);

    return 0;
}

