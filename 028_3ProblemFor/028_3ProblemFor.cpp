#include <stdio.h>

int main() {
	int n = 0;
	printf("n값을 입력해주세요 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		printf("*");
	printf("\n");

	for (int i = 1; i < n; i += 2)
		printf("%d ", i);
	printf("\n");

	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	printf("sum = %d\n", sum);
}