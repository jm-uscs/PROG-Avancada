#include <stdio.h>

int main(void)
{
    int vetor[5];
    int pesquisa, loop_pesquisa = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }

    while (loop_pesquisa == 0)
    {
        printf("Digite um número para pesquisar no vetor: ");
        scanf("%d", &pesquisa);

        for (int j = 0; j < 5; j++)
        {
            if (vetor[j] == pesquisa)
            {
                printf("*** Número %d encontrado na posição %d do vetor.\n\n", pesquisa, j);
                loop_pesquisa = 1;
            }
        }
    }
    return 0;
}