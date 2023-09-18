#include "main.h"
#include<stdio.h>
/**
 * puts2 - the function
 * @str: the input
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] + 1 != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
