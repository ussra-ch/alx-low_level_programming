#include "main.h"
#include<stdio.h>
/**
 * puts2 - the function
 * @str: the input
 */
void puts2(char *str)
{
	int i = *str, j, len;

	while (i != '\0')
	{
		i++;
	}
	len = i;

	for (j = 0; j < len; j++)
	{
		if (j % 2 != 0)
		{
			printf("%c", str[j]);
		}
	}
}
	
