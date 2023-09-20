#include "main.h"
/**
 * lett - the function
 * @a: the input
 * Return: pointer (Success)
 */
char *leet(char *str)
{
	char leetMap[128] = {0};

	int i = 0;

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	while (str[i] != '\0')
	{
		if (leetMap[(int)str[i]])
		{
			str[i] = leetMap[(int)str[i]];
		}
		i++;
	}
	return (str);
}
