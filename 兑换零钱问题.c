#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{	
	//���������һ������ʾ��Ҫ�һ���Ǯ���ܶ�N�����ܶ�N�һ�Ϊ��ֵ��5Ԫ��1Ԫ��5�ǹ�100���㳮��
	//ÿ���㳮������1�ţ���ӡ���п��еĶһ�������
	int five = 0;
	int one = 0;
	int half = 0;
	int money = 0;
	scanf("%d", &money);
	for (five = 1; five <money/5 ; five++) //ֱ������forѭ���������
	{
		for (one = 1; one < money-5 ; one++)
		{
			for (half = 2; half <money ; half+=2) //��ë����������
			{
				if ((five * 5 + one * 1 + (half / 2)) == money&&
					(five+one+half)==100) // Ǯ���ܶ�=money����Ʊ������=100
				{
					printf("%d %d %d", five, one, half);
					putchar('\n');
				}
			}
		}

	}
	return 0;
}