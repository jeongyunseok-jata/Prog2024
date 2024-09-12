#include <stdio.h>

int main()
{
    int n,sum = 0;
    
    printf("n값을 입력해주세요 : ");
    scanf_s("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("1 ~ %d 까지의 합 : %d", n, sum);
}
