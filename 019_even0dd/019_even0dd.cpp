#include <stdio.h>

int main()
{
	int a;

	printf("숫자 입력 : ");
	scanf_s("%d", &a);

	//if (a % 2 == 1) printf("%d은 홀수입니다.\n",a);
	//if (a % 2 == 0) printf("%d은 짝수입니다.\n",a);
	if (a % 2 == 1) printf("%d은 홀수입니다.\n", a);
	else printf("%d은 짝수입니다.\n",a);
}