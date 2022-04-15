#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	short a = 32767; //7fff -- 0111 1111 1111 1111(补 = 原)
	short b = a + 1; //ffff8000 
					//			    1000 0000 0000 0000（补）
					//			  1 0000 0000 0000 0000 （原码 = -0 = short的模,模在机器位上是不可以表示的）
					//	所以规定 -0 等于负的模
	printf("a:%d\nb:%0x\n", a, b);
	return 0;
}