#include <stdio.h>

int main(void)
{
    char vetor1[5], vetor2[5];
    int contadorDiferente = 0;

    printf("Digite letras para preencher dois vetores de 5 posições cada.\n");

    printf("*** Vetor 1:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite uma letra para a posição %d do vetor 1: ", i);
        scanf(" %c", &vetor1[i]);
    }

    printf("*** Vetor 2:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite uma letra para a posição %d do vetor 2: ", i);
        scanf(" %c", &vetor2[i]);
    }
    // Eu vi essa outra forma de fazer a comparação
    // usando operador ternário e achei legal
    for (int i = 0; i < 5; i++)
    {
        vetor1[i] != vetor2[i] ? contadorDiferente++ : 0;
    }
    printf("\n*** Os vetores possuem %d letras diferentes entre si.\n", contadorDiferente);

    return 0;
}