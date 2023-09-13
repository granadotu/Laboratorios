#include <stdio.h>

int busca_ultimo(int v[], int n, int e) {
    int ultimo_indice = -1;  

    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            ultimo_indice = i;  
        }
    }

    return ultimo_indice;
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
    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &elemento);

    int indice = busca_ultimo(vetor, n, elemento);

    if (indice != -1) {
        printf("O elemento %d foi encontrado pela ultima vez no indice %d.\n", elemento, indice);
    } else {
        printf("-1");
    }

    return 0;
}
