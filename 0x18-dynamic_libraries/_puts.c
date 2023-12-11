#include "main.h"
/**
 * _puts - the function
 * @str: the input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
