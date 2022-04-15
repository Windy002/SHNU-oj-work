#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>


void Swap(int* lhs, int* rhs) //ʵ���������β���ֵ����
{
	int t = *lhs;

	*lhs = *rhs;
	*rhs = t;
}

int pow(int x)//��ʮ��n����
{
	int i = 0;
	int sum = 1;
	if (x == 0)
		return sum;
	for (i = 1; i <= x; i++)
	{
		sum *= 10;
	}
	return sum;
}

int N(int x)//��׳�
{
	int i = 0;
	int sum = 1;
	for (i = 1; i <= x; i++)
	{
		sum *= i;
	}
	return sum;
}

void FullPermutation(int source[], int ts[], int begin, int end)//�ҵ����Ե�ȫ���в��Ҵ���ts������
{
	int i;
	static int n = 0;

	if (begin >= end) // �ҵ�һ������
	{
		for (i = 0; i < end; i++)
		{
			ts[n] += source[i] * pow(end - i - 1);
		}
	}

	else// û������һ�����У��������������һ��Ԫ��
	{
		for (i = begin; i < end; i++)
		{
			if (begin != i)
			{
				Swap(&source[begin], &source[i]); // ����
			}

			// �ݹ�����ʣ��Ĵ�begin+1��end��Ԫ��
			FullPermutation(source, ts, begin + 1, end);

			if (begin != i)
			{
				Swap(&source[begin], &source[i]); // ����ʱ��ԭ
			}
		}
	}
	if (ts[n] != 0)
		n++;
}

void sort_print(int ts[], int len)//�����Ҵ�ӡ
{
	int i = 0;
	for (i = 0; i < len - 1; i++)
	{
		int j = 0;
		for (j = 0; j < len - 1 - i; j++)
		{
			if (ts[j] < ts[j + 1])
			{
				int t = ts[j];
				ts[j] = ts[j + 1];
				ts[j + 1] = t;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d\n", ts[i]);
	}
}
int main()
{
	int source[30];
	int ts[720] = { 0 };
	int i, count;

	scanf("%d", &count);

	// ��ʼ������
	for (i = 0; i < count; i++)
	{
		source[i] = i + 1;
	}

	FullPermutation(source, ts, 0, count);
	sort_print(ts, N(count));
	return 0;
}