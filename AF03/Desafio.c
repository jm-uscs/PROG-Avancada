#include <stdio.h>
//Eu não sabia nem o que era uma matriz de adjacência 
//antes desse desafio
int main(void) {
    int matriz[5][5];
    // Zera a matriz no começo
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    // Relações [1,4] e [2,5]
    // Tiro 1 de cada valor pra pegar o indice
    matriz[0][3] = 1; // Relação 1-4
    matriz[3][0] = 1; // inversão da relação
    matriz[1][4] = 1; // Relação 2-5
    matriz[4][1] = 1; // inversão da relação
    // Tive que pedir ajuda pro ChatGPT pra imprimir a matriz bonitinha
    printf("Matriz de Adjacência:\n");
    printf("    1  2  3  4  5\n");
    for(int i = 0; i < 5; i++) {
        printf("%d   ", i + 1);
        for(int j = 0; j < 5; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}