#include "main.h"
/**
 * cap_string - the function
 * @a: the input
 * Return: pointer to a char (Success)
 */
char *cap_string(char *a)
{
	int i = 0;

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] = a[0] - 32;
	}
	while (a[i] != '\0')
	{
		if (a[i] == ',' || a[i] == ';' || a[i] == '.')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
		else if (a[i] == '"' || a[i] == ',' || a[i] == '(')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
		else if (a[i] == ')' || a[i] == ',' || a[i] == '{' || a[i] == '}')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
		else if (a[i] == ' ' || a[i] == '!' || a[i] == '?')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
		i++;
	}
	return (a);
}
