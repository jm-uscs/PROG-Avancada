
#include <stdio.h>

float imc(float peso, float altura) {
	return peso/(altura * altura);
}

int main(void)
{   
	printf("Seu imc é: %.2f", imc(65, 1.80));
}
