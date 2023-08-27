#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
  int num;
  int palpite;
  srand(time(NULL));

  num = 1 + rand()%99;

  printf("O valor do seu palpite precisa ser >= a 1 e <= a 100.\n");
  printf("Escreva um palpite: ");
  scanf("%d", &palpite);
  if(palpite < 1 || palpite > 100)
  {
    printf("Valor invalido. Tente novamente!\n");
    printf("Escreva um palpite: ");
    scanf("%d", &palpite);
  }
  
  if(palpite == num)
  {
    printf("Parabens!!! Você acertou!\n");
  }
  
  if(palpite < num)
  {
    printf("Voce chutou muito baixo! O valor correto eh %d.\n", num);
  }
  else
  {
    printf("Voce chutou muito alto! O valor correto eh %d.\n", num);
  }
  
}
