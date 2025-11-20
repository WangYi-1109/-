#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float point = 0;
	int t = 0;
	printf("请输入成绩：(满分100分)\n");
	scanf("%f", &point);
	if (point > 100 || point < 0) {
		printf("该成绩无效");
	}else {
		t = (int)(point / 10);
		switch (t) {
		case 10:printf("A\n"); break;
		case 9:printf("A\n"); break;
		case 8:printf("B\n"); break;
		case 7:printf("C\n"); break;
		case 6:printf("D\n"); break;
		default:printf("E\n"); break;
		}
	}
	return 0;
}