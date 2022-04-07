#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//如果一个数恰好等于它的真因子之和，则称该数为“完全数”。
//例如：第二个完全数是28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。
int main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	scanf("%d",&n);
	for (i = 6; i <=n; i++,sum=0) //第一个完全数是6，所以从6开始
	{
		int j = 1;
		for (j=1; j <= i / 2; j++) //它的约数肯定<=本身/2
		{
			if (i % j == 0) 
				sum += j;	//把约数加起来
		}
		if (sum == i)
			printf("%d ", i); //如果它的约数的和等于本身，则他就是完全数
	}
	return 0;
}