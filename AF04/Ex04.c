
#include <stdio.h>

float areaTriangulo(float base, float altura) {
	return (base * altura )/2;
}

int main(void)
{
	printf("%.2f", areaTriangulo(3, 4));
	return 0;
}
