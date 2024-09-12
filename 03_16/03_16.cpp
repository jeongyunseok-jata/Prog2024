#include <stdio.h>

int main()
{
	printf("화씨 \t 섭씨\n");
	printf("============\n");
	for (int f = 100; f >= 0; f = f-10) {
		float C = (f - 32) * 5.0 / 9.0;
		printf("%d \t %.1f\n",f,C);
	}
}