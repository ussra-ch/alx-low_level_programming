#include <stdio.h>
/**
 * main - printd the alphabets in lower case
 * Return: 0
 */
int main(void)
{
	char al[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
