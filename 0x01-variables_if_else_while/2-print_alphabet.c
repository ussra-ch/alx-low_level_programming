#include <stdio.h>
/**
 * main - printd the alphabets in lower case
 * Return: 0
 */
int main(void)
{
	char al[25] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int i;
	for (i = 0; i < 25; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
