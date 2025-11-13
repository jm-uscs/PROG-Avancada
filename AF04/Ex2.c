
#include <stdio.h>

float triplo(float num) {
	return num*3;
}

int main(void)
{
    float num;
    printf("Insira um número: ");
    scanf("%f", &num);
	printf("o triplo de %.2f é %.2f", num, triplo(3));
	return 0;
}
