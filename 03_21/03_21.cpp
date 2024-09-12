#include <stdio.h>

int main()
{
    int n, sum1 = 0, sum2 = 0, sum3 = 0;

    printf("n값을 입력해주세요 : ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum1 += i;
        else
            sum2 += i;
        sum3 += i;
    }
    printf("1 ~ %d 까지의 짝수 합 : %d\n", n, sum1);
    printf("1 ~ %d 까지의 홀수 합 : %d\n", n, sum2);
    printf("1 ~ %d 까지의 합 : %d", n, sum3);
}
