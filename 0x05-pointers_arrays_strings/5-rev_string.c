#include "main.h"
#include<stdio.h>
/**
 * rev_string - the function
 * @s: the input
 */
void rev_string(char *s)
{
	int i = 0, len;

	int j[10000];

	while (s[i] != '\0')
	{
		j[i] = s[i];
		i++;
	}
	len = i;

	for (i = 0; i < len; i++)
	{
		s[i] = j[len - 1 - i];
	}
}
