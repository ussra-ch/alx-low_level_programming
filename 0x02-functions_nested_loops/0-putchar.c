#include "main.h"
#include<stdio.h>

int putchar(char c)
{
	return(write(1,&c,1));
}
/**
 * main- print -putchar
 * Return: 0 (Success)
 */
int main(void)
{
	putchar('-');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');

	return (0);
}
