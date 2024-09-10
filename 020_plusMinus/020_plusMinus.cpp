#include <stdio.h>

int main() {
    int n;

    printf("숫자 입력: ");

    scanf_s("%d", &n);

    if (n > 0) {
        printf("%d은 양수입니다.\n",n);
    }
    else if (n == 0) {
        printf("%d은 0입니다.\n",n);
    }
    else {
        printf("%d은 음수입니다.\n",n);
    }

}
