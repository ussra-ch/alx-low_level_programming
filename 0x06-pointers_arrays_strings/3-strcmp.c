#include "main.h"
/**
 * _strcmp - the function
 * @s1: the first inpput
 * @s2: the second input
 * Return: Always (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];

	return (j);
}
