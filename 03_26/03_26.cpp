﻿#include <stdio.h>

int main()
{
    int n;
    printf("자연수 입력 : ");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}