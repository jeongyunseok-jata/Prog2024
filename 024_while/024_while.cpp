#include <stdio.h>

int main()
{
    int i = 1;
    while (true) {
        printf("%d ", i);
        i++;
        if (i > 100) break;
    }
    printf("\n");

    int x = 1;
    do {
        printf("%d ", x);
        x++;
    } while (x <= 10);
}