#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF-8");
	double a;
	int n;
	double result = 1.0;
	printf("Введите основание а: ");
	scanf("%lf", &a);
	printf("Введите степень n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		result = result * a;
	}
	printf("Результат: %lf\n" , result);

	return 0;
}
