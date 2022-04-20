#include <stdio.h>

int MyPower(int base, int exp);

int main(void)
{
	int base = 0;
	int exp = 0;

	printf("Input a base number: ");
	scanf_s("%d", &base);

	printf("Input an exponent number: ");
	scanf_s("%d", &exp);

	int result = MyPower(base, exp);
	printf("%d^%d = %d\n", base, exp, result);

	return 0;
}

//반복문을 이용하는 경우
int MyPower(int base, int exp)
{
	int result = 1;
	for (int i = 0; i < exp; i++) {
		result *= base;
	}

	return result;
}
