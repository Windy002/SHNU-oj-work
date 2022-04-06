#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0,t=0;
	scanf("%d", &t);
	//putchar('\n');
	for (i = 0; i < (t + 1)/2 ; i++)  //第一个for打印菱形的上半部分
	{
		int j =0;
		for (j = 0; j < (t - 1) / 2 - i; j++)
		{
			putchar(' ');  // 打印空格
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			putchar('*'); // 打印图案
		}
		putchar('\n');
	}

	for (i = 0; i < (t - 1) / 2; i++) //第二个for打印下半部分
	{
		int j = 0;
		for (j = 0; j < i + 1; j++) 
		{
			putchar(' ');   // 打印空格
		}
		for (j = 0; j < t-2-2*i; j++)
		{
			putchar('*');  // 打印图案
		}
		putchar('\n');
	}
	return 0;
}