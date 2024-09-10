#include <stdio.h>

int main()
{
    int a, b;
    printf("두개의 정수를 입력하세요: ");
    scanf_s("%d %d", &a, &b);
    printf("두개의 정수 : %d %d\n",a,b);
    getchar();

    //rewind(stdin);

    char c;
    printf("한개의 문자를 입력하세요: ");
    scanf_s("%c", &c);
    printf("문자 : %c\n", c);

    float f;
    printf("한개의 실수를 입력하세요: ");
    scanf_s("%f", &f);
    printf("실수 : %f\n", f);

    double d;
    printf("한개의 배정도 실수를 입력하세요: ");
    scanf_s("%lf", &d);
    printf("문자 : %f\n", d);
}