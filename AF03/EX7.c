#include <stdio.h>

int main(void)
{
    int matriz[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("*** A matriz digitada é:\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}