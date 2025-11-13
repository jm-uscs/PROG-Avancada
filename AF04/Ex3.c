
#include <stdio.h>

float divide(float n1, float n2) {
	return n1/n2;
}

int main(void)
{
	float n1, n2;
	printf("Insira o dividendo: ");
	scanf("%f", &n1);
	printf("Insira o divisor: ");
	scanf("%f", &n2);
	printf("%.2f / %.2f = %.2f", n1, n2, divide(n1, n2));
	return 0;
}
