#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int  pow(int x, int y)
{
	int i = 0;
	int s = 1;
	for (i = 0; i < y; i++)
	{
		s *= x;
		s %= 1000;//%1000是因为我们只关心最低三位数，而且最低三位数的幂的结果与后面的数无关
	}
	return s;
}


void func_print(int arr[], int  sum)
{
	int i = 0;
	for (i = 0; i < 3; i++) //存入arr
	{
		arr[i] = sum % 10;
		sum /= 10;
	}
	for (i = 2; i >= 0; i--) //逆序打印
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
	sum = pow(x, y); // 计算结果
	func_print(arr, sum);// 把结果每一位数存入arr并打印
	return 0;
}



//
////给你一个程序验证：
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