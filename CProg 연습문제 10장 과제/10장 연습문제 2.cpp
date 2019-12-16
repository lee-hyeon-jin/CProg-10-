#include <stdio.h>

int main(void)
{
	int a, b;
	int intpow(int m, int n);

	printf("두 개의 임의 정수를 입력하시오: ");
	scanf_s("%d %d", &a, &b, sizeof(int));

	printf("%d x %d = %d", a, b, intpow(a, b));
}

int intpow(int m, int n)
{
	int sum = 0;
	sum = m * n;

	return sum;
}