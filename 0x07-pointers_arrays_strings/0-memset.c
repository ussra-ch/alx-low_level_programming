#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: the memory area pointed
 * @b: constant byte
 * @n: bytes
 * Return: ptr to he memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
