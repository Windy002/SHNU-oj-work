#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
	int t = 0;
	scanf("%d,%d,%d,%d", &x1, &x2, &x3, &x4);
	putchar('\n');
	if (x1 > x2)
	{
		t = x1;
		x1 = x2;
		x2 = t;
	}
	if (x1 > x3)
	{
		t = x1;
		x1 = x3;
		x3 = t;
	}
	if (x1 > x4)
	{
		t = x1;
		x1 = x4;
		x4 = t;
	}
	if (x2 > x3)
	{
		t = x2;
		x2 = x3;
		x3 = t;
	}
	if (x2 > x4)
	{
		t = x2;
		x2 = x4;
		x4 = t;
	}
	if (x3 > x4)
	{
		t = x3;
		x3 = x4;
		x4 = t;
	}
	printf("%d,%d,%d,%d\n", x1, x2, x3, x4);
	return 0;
}