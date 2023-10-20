#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and the
 * n in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char al[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char alp[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	int i, j;

	for (i = 0; i < 26; i++)
		putchar(al[i]);
	for (j = 0; j < 26; j++)
		putchar(alp[j]);
	putchar('\n');
	return (0);
}
