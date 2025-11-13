
#include <stdio.h>

float imc(float peso, float altura) {
	return peso/(altura * altura);
}

int main(void)
{   
	float peso, altura;
	printf("Insira seu peso em kg: ");
	scanf("%f", &peso);
	printf("Insira sua altura em metros: ");
	scanf("%f", &altura);
	printf("Seu imc é: %.2f", imc(peso, altura));
}
