#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double Squ(double x, double e)
{
	double xn = x; //xn���ڳ�ʼ��ֵ
	double xn1 = (xn + x / xn) / 2;//��һ�ε���
	double t = x; //��һ���ж�
	while ((t - xn1) > e) //�����������ͼ�������
	{
		t = xn1; //t ������һ�ε�����ֵ
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