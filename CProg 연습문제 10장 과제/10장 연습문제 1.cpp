#include <stdio.h>

int main(void)
{
	int a;
	double cm(int inch);
	
	printf("���� �Է��Ͻÿ�(inch): ");
	scanf_s("%d", &a, sizeof(int));

	printf("%dinch = %.2fcm\n", a, cm(a));

}

double cm(int inch)
{
	return inch * 2.54;
}