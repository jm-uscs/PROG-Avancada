#include <stdio.h>

int main(void)
{
    float matrizNotas[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite a nota da linha %d coluna %d: ", i, j);
            scanf("%f", &matrizNotas[i][j]);
        }
    }
    // Demorei um pouco para saber onde colocar a divisão para calcular a média corretamente
    for (int i = 0; i < 5; i++)
    {
        float media = 0;
        for (int j = 0; j < 5; j++)
        {
            media += matrizNotas[i][j];
        }
        media /= 5;
        // O operador de divisão /= tem esse visual por causa da fonte que eu uso
        printf("A média da linha %d é: %.2f\n", i, media);
    }

    return 0;
}