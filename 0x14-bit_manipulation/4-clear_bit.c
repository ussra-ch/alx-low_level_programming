#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t;

	t = ~(1 << index);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= t;
	return (1);
}
