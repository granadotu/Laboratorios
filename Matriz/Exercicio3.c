#include <stdio.h>
#include <stdbool.h>

bool ehMatrizDiagonal(int matriz[][10], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i != j && matriz[i][j] != 0) {
                return false; 
            }
        }
    }
    return true; 
}

int main() {
    int matriz[10][10];
    int linhas, colunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    bool resultado = ehMatrizDiagonal(matriz, linhas, colunas);

    if (resultado) {
        printf("A matriz eh uma matriz diagonal.\n");
    } else {
        printf("A matriz nao eh uma matriz diagonal.\n");
    }

    return 0;
}

