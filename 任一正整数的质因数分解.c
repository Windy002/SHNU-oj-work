#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	putchar('\n');
//	for (i = 2; i <= x; i++)
//	{
//		while (x >= i) // 里面再嵌套一个while 因为一个数可以%某数多次
//					   //如果 没有while，会导致算出来的其他数是前一个数的倍数 ，如3、9 
//						//9 是三的倍数， 但由于没有while，只除了一次3就跳了，后面可能会算出来9
//		{
//			if (x % i == 0)
//			{
//				printf("%d ", i);
//				x /= i;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	putchar('\n');
//	return 0;
//}

int main()
{
	int i = 2;
	int n = 0;
	scanf("%d", &n);
	do
	{
		while (n % i == 0)
		{
			printf("%d ", i);
			n /= i; //n 是每次整除它的因子的
		}
		i++;
	} while (i <= n);//所以当n=i时，i仍然是因子，所以是i<=n;
	return 0;
}

//int main()
//{
//    int n, i = 2;
//    printf("输入一个正整数：\n");
//    scanf("%d", &n);
//    printf("%d=", n);
//    do
//    {
//        while (n % i == 0)        //如果 i 是n的质因子，则反复分解出 i
//        {
//            printf("%d*", i);     //输出质因子和一个乘号
//            n /= i;              //n = n / i,用整除后的商作为新的被除数
//        }
//        i++;                     //生成新的i
//    } while (i < n);
//    printf("%d\n", n);//n值每次都被替换成整除后的商，直到不能整除时的n仍然是因子，所以打印出来
//    return 0;
//}
