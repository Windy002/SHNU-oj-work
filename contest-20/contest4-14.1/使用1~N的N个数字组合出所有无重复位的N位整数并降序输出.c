#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[20] = { 0 };
	int num = 0;
	scanf("%d", &num);
	arr[0] = num;

	int i = 0;
	int ret = num;
	for (i = 1; i <= ret - 1; i++)//��ʼ��
	{
		arr[i] = (--num);
	}


	for (i = 1; i <= ret; i++)
	{
		int j = 0;
		int k = ret - 1;//���ƴ�ӡ����
		while (k)
		{
			int j = 0;
			for (j = 0; j < ret; j++)//��ӡһ��
			{
				printf("%d", arr[j]);
			}
			putchar('\n');

			for (j = 1; j <= ret - 2; j++)//����һ��
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}

			k--;
		}
		int temp = arr[0]; //���ƽ���
		arr[0] = arr[0 + i];
		arr[0 + i] = temp;

	}
	return 0;
}