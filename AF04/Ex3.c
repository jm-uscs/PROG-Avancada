
#include <stdio.h>

void divide(float n1, float n2) {
	printf(" %.2f / %.2f = %.2f", n1, n2, n1/n2);
}

int main(void)
{
	divide(1, 0);
	return 0;
}
