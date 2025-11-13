
#include <stdio.h>

float areaTriangulo(float base, float altura) {
	return (base * altura )/2;
}

int main(void)
{
	float base, altura;
	printf("Insira a base do triângulo: ");
	scanf("%f", &base);
	printf("Insira a altura do triângulo: ");
	scanf("%f", &altura);
	printf("Área do Triângulo: %.2f", areaTriangulo(base, altura));
	return 0;
}
