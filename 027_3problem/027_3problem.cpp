#include <stdio.h>

int main()
{
    int n = 0;
    int i = 1;
    printf("n값을 입력해주세요 : ");
    scanf_s("%d", &n);
    while (i <= n) {
        printf("*");
        i++;
    }
    printf("\n");
    i = 1;
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d ",i);
        }
        i++;
   }

    printf("\n");
    i = 1;
    int sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("sum  = %d", sum);
}
