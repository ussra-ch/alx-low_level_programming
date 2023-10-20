#include "main.h"
/**
 * length - calculates the length of the dtring
 * @s: the string
 * Return: the length of the string
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}
/**
 * check - checks if the string is palindrom
 * @s: string
 * Return: 1 if yes, 0 else
 */
int check(int i, char *s, int len)
{
	if (len > 0)
	{
		if (s[i] == s[len])
			return (check(i + 1, s, len - 1));
		else if (s[i] == s[len])
			return (1);
		else
			return (0);
	}
	return (1);
}
/**
 * is_palindrome - check if the string is palindrom
 * @s: input
 * Return: int. 1 is true and 0 else
 */
int is_palindrome(char *s)
{
	int len;

	len = length(s);

	return (check(0, s, len - 1));
}
