#include <stdio.h>

int main(void)
{
    int matriz[5][5];
    int maior, linhaMaior, colunaMaior = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("*** O maior valor da matriz é %d na posição [%d][%d]\n", maior, linhaMaior, colunaMaior);

    return 0;
}