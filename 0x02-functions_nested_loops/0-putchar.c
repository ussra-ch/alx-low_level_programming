#include<unisrd.h>

/**
 * _putchar: short descrription for the putchar function
 * Return: on Succes 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
