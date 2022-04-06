#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		
		int j = 0;
		for (j = 0; j < line - i-1; j++)
		{
			putchar(' ');
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
