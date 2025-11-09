#include <stdio.h>

int main(void)
{
    int vetor[999];
    int temp = 0;
    int i = 0;
    int loop = 0;

    while (loop == 0)
    {

        printf("Digite um número inteiro (Negativo para sair): ");
        scanf("%d", &temp);

        if (temp < 0)
        {

            printf("\n*** Número negativo digitado. Encerrando...\n\n");
            loop = 1;
        }
        else
        {

            vetor[i] = temp;
            printf("\n  Você digitou: %d\n\n", vetor[i]);
            i++;
        }
    }

    return 0;
}