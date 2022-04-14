#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double funcos(double e, double x) 
{
	double sum = 0;
	double fact;
	double abs = 1;//n是某一项的阶乘 
	int nega = 1;// 
	sum += abs; //第一项等于1
	int i = 2;
	for (i = 2; ; i = i + 2) 
	{
		fact = 1;//求阶乘
		int j = i;
		for (j = i; j >= 1; --j) 
		{
			fact = fact * j;
		}

		abs = pow(x, i) / fact; //每项的绝对值
		if (nega % 2 == 1) 
			sum -= abs;//判断每一项的符号加到总项里 
		else 
			sum += abs;

		if (abs < e) 
			return sum;//如果这一项的绝对值＜e，那么返回sum 
		nega++;
	}
}


int main()
{
	double e = pow(10, -6);
	double x;
	scanf("%lf", &x);
	printf("%.3lf\n", funcos(e, x));
	return 0;
}
