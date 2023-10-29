#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: ugnsigned long int
 * @index: unsigned int
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t;

	t = 1 << index;
	if (index >= sizeof(n) * 8)
	{
		/* assuming 8 bits per byte */
		return (-1);
	}
	return ((int)((n & t) >> index));
}
