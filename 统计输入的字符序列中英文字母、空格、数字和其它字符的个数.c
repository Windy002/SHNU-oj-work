#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int cha = 0;
	int space = 0;
	int digit = 0;
	int others = 0;
	char arr[72] = { 0 };
	gets(arr);
	for (char* pc = &arr[0]; *pc != '\0'; pc++)
	{
		if (*pc >= 'A' && *pc <= 'z')
			cha++;
		else if (*pc >= '0' && *pc <= '9')
			digit++;
		else if (*pc == ' ')
			space++;
		else
			others++;
	}
	printf("char=%d space=%d digit=%d others=%d", cha, space, digit, others);
	return 0;
}