#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	short a = 32767; //7fff -- 0111 1111 1111 1111(�� = ԭ)
	short b = a + 1; //ffff8000 
					//			    1000 0000 0000 0000������
					//			  1 0000 0000 0000 0000 ��ԭ�� = -0 = short��ģ,ģ�ڻ���λ���ǲ����Ա�ʾ�ģ�
					//	���Թ涨 -0 ���ڸ���ģ
	printf("a:%d\nb:%0x\n", a, b);
	return 0;
}