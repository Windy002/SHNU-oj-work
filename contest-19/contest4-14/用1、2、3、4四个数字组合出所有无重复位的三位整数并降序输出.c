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
			arr[j + 1] = t;//����һ��

			int k = 0;
			for (k = 1; k <= 3; k++) //��ӡ1��2��3Ԫ��
			{
				printf("%d",arr[k]);
			}
			putchar('\n');
		}

		int k = 0;
		for (k = 1; k <= 4; k++) //��ӡ1,3,4Ԫ��
		{
			if (k == 2)
				k++;//�ڶ���Ԫ�ز���ӡ
			printf("%d", arr[k]);
		}
		putchar('\n');
		
	}
	return 0;
}