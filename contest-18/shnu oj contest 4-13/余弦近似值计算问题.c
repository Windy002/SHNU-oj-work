#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double funcos(double e, double x) 
{
	double sum = 0;
	double fact;
	double abs = 1;//n��ĳһ��Ľ׳� 
	int nega = 1;// 
	sum += abs; //��һ�����1
	int i = 2;
	for (i = 2; ; i = i + 2) 
	{
		fact = 1;//��׳�
		int j = i;
		for (j = i; j >= 1; --j) 
		{
			fact = fact * j;
		}

		abs = pow(x, i) / fact; //ÿ��ľ���ֵ
		if (nega % 2 == 1) 
			sum -= abs;//�ж�ÿһ��ķ��żӵ������� 
		else 
			sum += abs;

		if (abs < e) 
			return sum;//�����һ��ľ���ֵ��e����ô����sum 
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
