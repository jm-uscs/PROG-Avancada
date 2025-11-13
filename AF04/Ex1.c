
#include <stdio.h>

void imprimeNome(char nome[]) {
	printf("Olá!, %s !", nome);
}

int main(void)
{
	char nome[25];
	printf("Digite seu nome: ");
	scanf("%s", nome);
	imprimeNome(nome);
	return 0;
}
