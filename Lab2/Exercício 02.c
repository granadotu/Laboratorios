#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
  int num;
  int palpite;
  int tentativa;
  tentativa = 1;

  srand(time(NULL));

  num = 1 + rand()%99;

  printf("O valor do seu palpite precisa ser >= a 1 e <= a 100.\n");

  while(1) {
    
    printf("Escreva um palpite: ");
    scanf("%d", &palpite);
    
    if(palpite == num)
    {
      printf("Parabens!!! Voce acertou!\n");
      printf("Tentativas: %d\n", tentativa);
      break;
    }
    
    if(palpite < num)
    {
      printf("Voce chutou muito baixo!\n");
    }
    else
    {
      printf("Voce chutou muito alto!\n");
    }
    if(palpite < 1 || palpite > 100)
    {
      printf("Valor invalido. Tente novamente!\n");
      printf("Escreva um palpite: ");
      scanf("%d", &palpite);
    }

    tentativa++;
    
  }
  
}  
