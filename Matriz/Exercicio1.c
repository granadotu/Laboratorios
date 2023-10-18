#include <stdio.h>

int calcularTraco(int matriz[][10], int tamanho) {
    int traco = 0;
    for (int i = 0; i < tamanho; i++) {
        traco += matriz[i][i];
    }
    return traco;
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
  
    int traco = calcularTraco(matriz, tamanho);
    printf("O traco da matriz eh: %d\n", traco);
  
    return 0;
}

