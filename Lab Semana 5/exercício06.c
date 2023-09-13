#include <stdio.h>

int busca_qtde(int v[], int n, int e) {
    int qtde = 0; 

    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            qtde++; 
        }
    }

    return qtde; 
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

    int elemento;
    printf("Digite o elemento a ser contado: ");
    scanf("%d", &elemento);

    int qtde = busca_qtde(vetor, n, elemento);

    printf("O elemento %d aparece %d vezes no vetor.\n", elemento, qtde);

    return 0;
}
