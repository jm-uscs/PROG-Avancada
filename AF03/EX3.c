#include <stdio.h>

int main(void)
{
    // Zerei o vetor na declaração
    // Pois ocorria erro na soma caso contrário
    int vetorSoma[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &vetorSoma[i]);
        vetorSoma[4] += vetorSoma[i];
    }

    printf("*** A soma das 4 posições no vetor é: %d", vetorSoma[4]);

    return 0;
}