#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int  pow(int x, int y)
{
	int i = 0;
	int s = 1;
	for (i = 0; i < y; i++)
	{
		s *= x;
		s %= 1000;//%1000����Ϊ����ֻ���������λ�������������λ�����ݵĽ�����������޹�
	}
	return s;
}


void func_print(int arr[], int  sum)
{
	int i = 0;
	for (i = 0; i < 3; i++) //����arr
	{
		arr[i] = sum % 10;
		sum /= 10;
	}
	for (i = 2; i >= 0; i--) //�����ӡ
	{
		printf("%d", arr[i]);
	}
}


int main()
{
	int x = 0;
	int y = 0;
	int arr[3] = { 0 };
	scanf("%d,%d", &x, &y);
	int  sum = 0;
	sum = pow(x, y); // ������
	func_print(arr, sum);// �ѽ��ÿһλ������arr����ӡ
	return 0;
}



//
////����һ��������֤��
//long fun(int x, int y, long* p) 
//{ 
//	int i; long t = 1;
//	for (i = 1; i <= y; i++)
//	t = t * x; 
//	*p = t; 
//	t = t % 1000;
//	return t;
//}
//
//int main() 
//{
//	long t, r; 
//	int x, y; 
//	printf("\nInput x and y: "); 
//	scanf("%ld%ld",&x,&y);
//	t = fun(x, y, &r); 
//	printf("\n\nx=%d, y=%d, r=%ld, last=%ld\n\n", x,y,r,t);
//	return 1; 
//}