#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int c[3] = { 0 };
	scanf("%d,%d", &c[1], &c[2]);
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0, h = 0;
	d1 = (c[1] - 2) * (c[1] - 2) + (c[2] - 2) * (c[2] - 2);
	d2 = (c[1] - 2) * (c[1] - 2) + (c[2] + 2) * (c[2] + 2);
	d3 = (c[1] + 2) * (c[1] + 2) + (c[2] + 2) * (c[2] + 2);
	d4 = (c[1] + 2) * (c[1] + 2) + (c[2] - 2) * (c[2] - 2);
	if (d1 <= 1)
		h = 5;
	if (d2 <= 1)
		h = 7;
	if (d3 <= 1)
		h = 10;
	if (d4 <= 1)
		h = 18;
	printf("%d",h);

	return 0;
}