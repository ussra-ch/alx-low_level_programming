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

	for (j = (len + 1) / 2; j < len; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
