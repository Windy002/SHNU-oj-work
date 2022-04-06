#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0,n=0;
	scanf("%d", &n);
	putchar('\n');
	double top = 2.0, bot=1.0, t=0 ;
	double sum = 0 ;
	for (i = 1; i <= n ; i++)
	{
		sum += top / bot ;
		t = top ;
		top += bot ;
		bot = t ;
	}
	printf("%.6f", sum);

	return 0;
}