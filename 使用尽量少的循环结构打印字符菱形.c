#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>


// 1.�������
//int main()
//{
//	int i = 0, t = 0;
//	scanf("%d", &t);
//	//putchar('\n');
//	for (i = 0; i < (t + 1) / 2; i++)  //��һ��for��ӡ���ε��ϰ벿��
//	{
//		int j = 0;
//		for (j = 0; j < (t - 1) / 2 - i; j++)
//		{
//			putchar(' ');  // ��ӡ�ո�
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			putchar('*'); // ��ӡͼ��
//		}
//		putchar('\n');
//	}
//
//	for (i = 0; i < (t - 1) / 2; i++) //�ڶ���for��ӡ�°벿��
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			putchar(' ');   // ��ӡ�ո�
//		}
//		for (j = 0; j < t - 2 - 2 * i; j++)
//		{
//			putchar('*');  // ��ӡͼ��
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//���ú�����ϵ
int main()
{
	int line = 0;
	scanf("%d", &line);
	assert(line % 2 != 0); //�Լ����ϵģ����Ϊż������
	int i = 0; //����ѭ������
	for (i = 1; i <= line; i++) // ѭ��line�Σ���ӡline��
	{
		int j = 0;//j���ƴ�ӡ�ո��ѭ��
		if (i >= 1 && i <= line / 2 + 1) //�ֶκ������ҵ�i��j�ĺ�����ϵ������jȡֵ��һ��
		{
			j = -i + (line / 2 + 1); 
		}
		else
		{
			j = i - (line / 2 + 1);
		}
		for (; j > 0; j--)// ��ӡ�ո�
		{
			putchar(' ');
		}
		int k = 0;//k���ƴ�ӡ*��ѭ��
		if (i >= 1 && i <= line / 2 + 1)//�ֶκ������ҵ�i��k�ĺ�����ϵ������kȡֵ��һ��
		{
			k = 2 * i - 1;
		}
		else 
		{
			k = -2 * i + (2 * line + 1);
		}
		for (; k > 0; k--)// ��ӡ*
		{
			putchar('*');
		}
		putchar('\n');
	}
}