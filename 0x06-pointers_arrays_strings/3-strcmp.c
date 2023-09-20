#include "main.h"
/**
 * _strcmp - the function
 * @s1: the first inpput
 * @s2: the second input
 * Return: Always (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, r;

	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			r = 0;
			i++;
			j++;
		}
		else if (s1[i] == '\0' && s[j] != '\0')
		{
			r = -1;
		}
		else if (s1[i] != '\0' && s[j] == '\0')
		{
			r = 1;
		}
	}
	return (r);
}
