#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{	
	//根据输入的一个数表示需要兑换零钱的总额N，将总额N兑换为等值的5元、1元和5角共100张零钞，
	//每种零钞不少于1张，打印所有可行的兑换方案。
	int five = 0;
	int one = 0;
	int half = 0;
	int money = 0;
	scanf("%d", &money);
	for (five = 1; five <money/5 ; five++) //直接三个for循环暴力穷举
	{
		for (one = 1; one < money-5 ; one++)
		{
			for (half = 2; half <money ; half+=2) //五毛的至少两张
			{
				if ((five * 5 + one * 1 + (half / 2)) == money&&
					(five+one+half)==100) // 钱的总额=money，钞票的数量=100
				{
					printf("%d %d %d", five, one, half);
					putchar('\n');
				}
			}
		}

	}
	return 0;
}