#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0, x = 0, t = 0;
	int arr[6] = { 1,2,3,4,5,6 };
	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j <= x; j++)
		{
			printf("%d", arr[j]);
		}
		putchar('\n');
		for (j = 0; j < x - 1; j++)
		{
			t = arr[6 - j - 1];
			arr[6 - j - 1] = arr[6 - j - 2];
			arr[6 - j - 2] = t;

		}
	}

	//for (i = 0; i < x; i++)
	//{
	//	printf("%d", arr[i]);
	//}

	//putchar('\n');

	return 0;
}
