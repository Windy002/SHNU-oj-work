#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[5] = { 0,1,4,3,2 };
	scanf("%d", &arr[0]);
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		for ( j = 1; j <= 3; j++)
		{
			int t = arr[j]; 
			arr[j] = arr[j + 1];
			arr[j + 1] = t;//交换一次

			int k = 0;
			for (k = 1; k <= 3; k++) //打印1，2，3元素
			{
				printf("%d",arr[k]);
			}
			putchar('\n');
		}

		int k = 0;
		for (k = 1; k <= 4; k++) //打印1,3,4元素
		{
			if (k == 2)
				k++;//第二个元素不打印
			printf("%d", arr[k]);
		}
		putchar('\n');
		
	}
	return 0;
}