#include "main.h"
#include<stdio.h>
/**
 * puts_half - the function
 * @str: the input
 */
void puts_half(char *str)
{
	int i = 0, len, j;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;

	if (len % 2 == 0)
	{
		for (j = (len / 2); j < len - 1; j++)
		{
			printf("%c", str[j]);
		}
	}
	else
	{

		for (j = ((len - 1) / 2); j < len - 1; j++)
		{
				printf("%c", str[j]);
		}
	}
	printf("\n");
}
