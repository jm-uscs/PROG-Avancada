#include <stdio.h>

int main()
{

  int vetor[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Digite um número inteiro: ");
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("%2d", vetor[i]);
  }

  return 0;
}
