#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double Squ(double x, double e)
{
	double xn = x; //xn等于初始的值
	double xn1 = (xn + x / xn) / 2;//第一次迭代
	double t = x; //第一次判断
	while ((t - xn1) > e) //不满足条件就继续迭代
	{
		t = xn1; //t 保留上一次迭代的值
		xn1 = (xn1 + x / xn1) / 2;
	}
	return xn1;
}
int main()
{
	double a = 0;
	double e = pow(10, -6);
	scanf("%lf", &a);
	double squ = Squ(a,e);
	printf("%lf", squ);
	return 0;
}