#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	char c[10] = { 0 };
	gets(c);
	int l=strlen(c);
	int i = 0;
	for (i = 0; i < l/2; i++)
	{
		if (c[i] != c[l - i - 1])
		{
			printf("NO\n");
			break;
		}
	}
	if (l / 2 == i)
		printf("YES\n");

	return 0;
}