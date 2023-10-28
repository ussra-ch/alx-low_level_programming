#include "main.h"
/**
* int binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to 0 and 1 char
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1,b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len, s = 0;

	const char *tmp;

	tmp = b;
	while (tmp[i] != '\0')
	{
		if (tmp[i] != '0' && tmp[i] != '1')
			return (0);
		i++;
	}
	i = 0;
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		s = s * 2 + (b[i] - '0');
	}
	return (s);
}
