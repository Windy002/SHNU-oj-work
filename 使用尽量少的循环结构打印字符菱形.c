#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>


// 1.暴力穷举
//int main()
//{
//	int i = 0, t = 0;
//	scanf("%d", &t);
//	//putchar('\n');
//	for (i = 0; i < (t + 1) / 2; i++)  //第一个for打印菱形的上半部分
//	{
//		int j = 0;
//		for (j = 0; j < (t - 1) / 2 - i; j++)
//		{
//			putchar(' ');  // 打印空格
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			putchar('*'); // 打印图案
//		}
//		putchar('\n');
//	}
//
//	for (i = 0; i < (t - 1) / 2; i++) //第二个for打印下半部分
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			putchar(' ');   // 打印空格
//		}
//		for (j = 0; j < t - 2 - 2 * i; j++)
//		{
//			putchar('*');  // 打印图案
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//利用函数关系
int main()
{
	int line = 0;
	scanf("%d", &line);
	assert(line % 2 != 0); //自己加上的，如果为偶数报错
	int i = 0; //控制循环次数
	for (i = 1; i <= line; i++) // 循环line次，打印line行
	{
		int j = 0;//j控制打印空格的循环
		if (i >= 1 && i <= line / 2 + 1) //分段函数，找到i和j的函数关系，所以j取值不一样
		{
			j = -i + (line / 2 + 1); 
		}
		else
		{
			j = i - (line / 2 + 1);
		}
		for (; j > 0; j--)// 打印空格
		{
			putchar(' ');
		}
		int k = 0;//k控制打印*的循环
		if (i >= 1 && i <= line / 2 + 1)//分段函数，找到i和k的函数关系，所以k取值不一样
		{
			k = 2 * i - 1;
		}
		else 
		{
			k = -2 * i + (2 * line + 1);
		}
		for (; k > 0; k--)// 打印*
		{
			putchar('*');
		}
		putchar('\n');
	}
}