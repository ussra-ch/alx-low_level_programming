#include "main.h"
/**
 * _memcpy - copies memory area
 * @des: destination
 * @src: source
 * @n: bytes
 * Return: ptro dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
