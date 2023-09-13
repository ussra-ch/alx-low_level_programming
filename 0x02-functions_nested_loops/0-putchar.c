#include "main.h"
#include<unistd.h>

/**
 *  _putchar - short describtion
 *  @c: Description of parameter x
 *  Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main- print -putchar
 * _putchar - short words
 * Description: hey there!
 * Return: 0 (Success)
 */
int main(void)
{

	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
