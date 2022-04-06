#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  // 求阶乘
	int sum = 0,x=1;
	int i = 0;
	int t = 0;
	scanf("%d", &t);
	putchar('\n');
	for (i=1;i<=t;i++)
	{
		
		int j=0;
		for (j = 1; j <= i; j++)
		{
			x*= j; // n!
		}
		sum += x; // 每次算出来的n!马上加到sum
		x = 1; // 每次算完n!先归1，再从n*(n-1)……2*1
	}
	printf("%d\n", sum);
	return 0;
}