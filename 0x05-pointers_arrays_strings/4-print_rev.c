#include "main.h"
#include <unistd.h>
/**
 * print_rev - the function
 * @s: the input
 */
void print_rev(char *s)
{
	int i = 0, j, len;

	while (i != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
