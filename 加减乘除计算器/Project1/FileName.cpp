#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double num1, num2, result;
	char option;
	printf("请输入数学运算（四则运算）\n");
	scanf("%lf %c %lf", &num1, &option, &num2);
	if (option == '/') {
		if (num2 == 0) {
			printf("请输入合法的运算");
		}
		else {
			result = num1 / num2;
			printf("%f%c%f=%f", num1, option, num2, result);
		}
	}
	if (option == '+') {
		result = num1 + num2;
		printf("%f%c%f=%f", num1, option, num2, result);
	}
	if (option == '-') {
		result = num1 - num2;
		printf("%f%c%f=%f", num1, option, num2, result);
	}
	if (option == '*') {
		result = num1 * num2;
		printf("%f%c%f=%f", num1, option, num2, result);
	}
	return 0;
}