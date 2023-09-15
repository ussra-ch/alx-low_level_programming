#include "main.h"
#include<unistd.h>
/**
 * more_numbers - the function
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			char digit = j + '0';
			write(1, &digit, 1);
		}
		for (j = 10; j <= 14; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}

