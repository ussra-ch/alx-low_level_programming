#include "main.h"
#include<stdio.h>
/**
 * rev_string - the function
 * @s: the input
 */
void rev_string(char *s)
{
	int i = 0, j, len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len; j++)
	{
		printf("%c", s[j]);
	}
	printf("\n");
	for (j = len - 1; j >= 0; j--)
	{
		printf("%c", s[j]);
	}
	printf("\n");
}
