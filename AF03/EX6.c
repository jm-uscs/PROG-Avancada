#include <stdio.h>

int main(void)
{
    int matriz[3][4];
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
    }

    printf("*** A soma de todos os elementos da matriz é: %d\n", soma);

    return 0;
}