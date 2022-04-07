#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//long long pow(int k)
//{	
//	int sum = 0;
//	if (k == 1)
//		return 1;
//	for (sum=1; k > 1; k--)
//	{
//		sum *= 10;
//	}
//	return sum;
//}   // 不好用
//--------------------------------------------------------------------------------
int main()
{
	int n = 0;					//11 1221 123321
	scanf("%d", &n);			// 10+1  1000+200+20+1 100000+20000+3000+300+20+1
	long long sum = 0;
	long long arr[11] = { 0,1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000 };//存放10的幂
	long long ret[10] = { 0 }; //存放结果
	int i = 1;
	int m = 1;
	for (i=1; i <= n; i++,m++) //n次循环，n个数
	{
		int j = 0;
		for (j = 1; j <= i; j++) //前半部分 //1 20+1 300+20+1
		{						//11 1221 123321
			sum += j * arr[j];
		}
		int k = 0;
		for (k=j; k > 1;k--,j++) //后半部分 //10 1000+200 100000+20000+3000
		{
			sum += (k - 1) * arr[j];
		}
		ret[m] = sum; // 存放每次算出来的结果
		int i = 1;
		for (j=0;j<m;j++) //让ret存放的是每个数
		{
			ret[m] = ret[m] - ret[m - 1-j];
		}
	}

	for (i = 1; i <=n; i++) //打印前面的
	{
		printf("%lld", ret[i]);
		if (i <= n-1)
			printf("+");
	}
	//打印结果
	printf("=%lld",sum);
	return 0;
}