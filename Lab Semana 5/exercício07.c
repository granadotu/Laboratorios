#include <stdio.h>

int valoresDiferentes(int vetor[], int n) {
    int contador = 0; 

    for (int i = 0; i < n; i++) {
        int valorAtual = vetor[i];
        int encontrado = 0; 

        for (int j = 0; j < i; j++) {
            if (vetor[j] == valorAtual) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int qtdeValoresDiferentes = valoresDiferentes(vetor, n);

    printf("A quantidade de valores diferentes no vetor eh: %d\n", qtdeValoresDiferentes);

    return 0;
}
